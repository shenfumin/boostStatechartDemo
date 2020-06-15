#include <ddsmanager.h>
#include "Hello.h"
#include "HelloSupport.h"
#include "Application.h"

using namespace NewRT::TCS;

#if 1
int
publisher_main_w_args(DDS_Long domain_id, char *udp_intf, char *peer,
                      DDS_Long sleep_time, DDS_Long count)
{
    Application *application = NULL;

    DDSPublisher *publisher = NULL;
    DDSDataWriter *datawriter = NULL;
    HelloWorldDataWriter *hw_writer = NULL;
    DDS_DataWriterQos dw_qos;
    DDS_ReturnCode_t retcode;
    HelloWorld *sample = NULL;
    DDS_Long i;
    DDSDataWriterListener *dw_listener = NULL;

    sample = HelloWorldTypeSupport::create_data();
    if (sample == NULL)
    {
        printf("failed HelloWorld_create\n");
        return 0;
    }

    application = new Application();
    if (application == NULL)
    {
        printf("failed Application new\n");
        goto done;
    }

    retcode = application->initialize("publisher", 
                                      "subscriber", 
                                      domain_id,
                                      udp_intf, 
                                      peer, 
                                      sleep_time, 
                                      count);
    if (retcode != DDS_RETCODE_OK)
    {
        printf("failed Application initialize\n");
        goto done;
    }


    publisher = application->participant->create_publisher(
                        DDS_PUBLISHER_QOS_DEFAULT,NULL,DDS_STATUS_MASK_NONE);
    if (publisher == NULL)
    {
        printf("publisher == NULL\n");
        goto done;
    }

    retcode = publisher->get_default_datawriter_qos(dw_qos);
    if (retcode != DDS_RETCODE_OK)
    {
        printf("failed get_default_datawriter_qos\n");
        goto done;
    }


#ifdef USE_RELIABLE_QOS
    dw_qos.reliability.kind = DDS_RELIABLE_RELIABILITY_QOS;
#else
    dw_qos.reliability.kind = DDS_BEST_EFFORT_RELIABILITY_QOS;
#endif
#if 1
    dw_qos.resource_limits.max_samples = 32;
    dw_qos.resource_limits.max_samples_per_instance = 32;
    dw_qos.resource_limits.max_instances = 1;
    dw_qos.history.depth = 32;
    
#endif

    /* INTEROPERABILITY NOTE:
       Non-Connext Micro DDS readers will have default LivelinessQoS kind
       set to DDS_AUTOMATIC_LIVELINESS_QOS.
     
       Because Connext Micro currently only supports
       DDS_MANUAL_BY_TOPIC_LIVELINESS_QOS, the non-Connext Micro reader will need
       to set its liveliness kind to DDS_MANUAL_BY_TOPIC_LIVELINESS_QOS as well,
       in order for Requested-Offered (RxO) semantics to be compatible.
    */
 
    datawriter = publisher->create_datawriter(application->topic,
                                              dw_qos,NULL,DDS_STATUS_MASK_NONE);
    if (datawriter == NULL)
    {
        printf("datawriter == NULL\n");
        goto done;
    }

    retcode = application->enable();
    if (retcode != DDS_RETCODE_OK)
    {
        printf("failed to enable application\n");
        goto done;
    }

    hw_writer = HelloWorldDataWriter::narrow(datawriter);
    if (hw_writer == NULL)
    {
        printf("failed datawriter narrow\n");
        goto done;
    }
    
//    data = *sample;

    for (i = 0;
        (application->count > 0 && i < application->count) ||
        (application->count == 0);
        ++i)
    {
        sprintf(sample->msg, "Hello World (%d)", i);
        printf("msg:%sn", sample->msg);
        std::cout<<"write msg:"<<sample->msg << std::endl;


        retcode = hw_writer->write(*sample, DDS_HANDLE_NIL);
        if (retcode != DDS_RETCODE_OK)
        {
            printf("Failed to write to sample\n");
        }

        OSAPI_Thread_sleep(application->sleep_time);
    }

  done:

    if (application != NULL)
    {
        delete application;
    }

    if (sample != NULL)
    {
        HelloWorldTypeSupport::delete_data(sample);
    } 

    return 0;
}

#endif


#if 1

int
main(int argc, char **argv)
{

    DDS_Long i = 0;
    DDS_Long domain_id = 1;
    char *peer = NULL;
    char *udp_intf = NULL;
    DDS_Long sleep_time = 1000;
    DDS_Long count = 0;

    for (i = 1; i < argc; ++i)
    {
        if (!strcmp(argv[i], "-domain"))
        {
            ++i;
            if (i == argc)
            {
                printf("-domain <domain_id>\n");
                return -1;
            }
            domain_id = strtol(argv[i], NULL, 0);
        }
        else if (!strcmp(argv[i], "-udp_intf"))
        {
            ++i;
            if (i == argc)
            {
                printf("-udp_intf <interface>\n");
                return -1;
            }
            udp_intf = argv[i];
        }
        else if (!strcmp(argv[i], "-peer"))
        {
            ++i;
            if (i == argc)
            {
                printf("-peer <address>\n");
                return -1;
            }
            peer = argv[i];
        }
        else if (!strcmp(argv[i], "-sleep"))
        {
            ++i;
            if (i == argc)
            {
                printf("-sleep_time <sleep_time>\n");
                return -1;
            }
            sleep_time = strtol(argv[i], NULL, 0);
        }
        else if (!strcmp(argv[i], "-count"))
        {
            ++i;
            if (i == argc)
            {
                printf("-count <count>\n");
                return -1;
            }
            count = strtol(argv[i], NULL, 0);
        }
        else if (!strcmp(argv[i], "-h"))
        {
            Application::help(argv[0]);
            return 0;
        }
        else
        {
            printf("unknown option: %s\n", argv[i]);
            return -1;
        }
    }

    return publisher_main_w_args(domain_id, udp_intf, peer, sleep_time, count);
}


#else
int main(int, char *[])
{
    NewRT::DDS::master()->init("./conf.xml",
        "./qos_profiles.xml");


    std::string topicName = "Foo1";
    NewRT::DDS::Pub::Publisher(topicName,FooTypePlugin_get())
        .enterCallbackEdit()
        .livelinessLost([](NewRT::DDS::Pub::DataWriter*, const NewRT::DDS::Pub::LivelinessLostStatus&){
            std::cout << "livelinessLost callback" << std::endl;
        })
        .publicationMatched([](NewRT::DDS::Pub::DataWriter*, const NewRT::DDS::Pub::PublicationMatchedStatus&){
            std::cout << "publication matched callback" << std::endl;
        })
//        .reliableWriterCacheChanged([](NewRT::DDS::Pub::DataWriter*, const NewRT::DDS::Pub::ReliableWriterCacheChangedStatus&){
//            std::cout << "reliable writer cache changed callback" << std::endl;
//        })
        .reliableReaderActivityChanged([](NewRT::DDS::Pub::DataWriter*, const NewRT::DDS::Pub::ReliableReaderActivityChangedStatus&){
            std::cout << "reliable reader activity changed callback" << std::endl;
        })
        .leaveCallbackEdit();
        
        std::cout << "Publisher success!!!" << std::endl;

    try{

        int16_t i(10000);
        Foo a;
        while(--i > 0)
        {
            
            a.x = rand();
            a.y = rand();
            std::cout << "(" << a.x << ":" << a.y << ")" << std::endl;
            if (i % 2)
            {
                NewRT::DDS::Pub::Publisher(topicName,FooTypePlugin_get()).write<Foo,FooDataWriter>(&a);
            }
            else
            {
                DDSManager::publish<Foo,FooDataWriter>(topicName, &a,FooTypePlugin_get());
            }
            sleep(15);
        }
    }catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
#endif
