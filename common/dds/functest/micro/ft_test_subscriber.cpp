#include "Foo.h"
#include "FooPlugin.h"
#include "FooSupport.h"
#include "Application.h"

#include "ddsmanager.h"
#include "ddsmaster.h"

#include <thread>

using namespace NewRT::TCS;

class FooReaderListener : public DDSDataReaderListener
{

  public:

    virtual void on_data_available(DDSDataReader *reader)
    {
        std::cout<<"on_data_available"<<std::endl;
    }
};



void dataFunc(const void* data)
{
    std::cout << " dataFunc() " << std::this_thread::get_id() << " " << data << std::endl;
}

const std::string tn("Foo1");



int
subscriber_main_w_args(DDS_Long domain_id, char *udp_intf, char *peer,
                       DDS_Long sleep_time, DDS_Long count)
{
    DDSSubscriber *subscriber = NULL;
    DDSDataReader *datareader = NULL;
    FooReaderListener *listener  = new FooReaderListener();
    DDS_DataReaderQos dr_qos;
    DDS_ReturnCode_t retcode;
    Application *application = NULL;
    RT_Registry_T *registry = NULL;


    application = new Application();
    if (application == NULL)
    {
        printf("failed Application new\n");
        goto done;
    }

    retcode = application->initialize("subscriber", 
                                      "publisher", 
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

    subscriber = application->participant->create_subscriber(
                        DDS_SUBSCRIBER_QOS_DEFAULT,NULL,
                        DDS_STATUS_MASK_NONE);
    if (subscriber == NULL)
    {
        printf("subscriber == NULL\n");
        goto done;
    }

    retcode = subscriber->get_default_datareader_qos(dr_qos);
    if (retcode != DDS_RETCODE_OK)
    {
        printf("failed get_default_datareader_qos\n");
        goto done;
    }

    dr_qos.resource_limits.max_samples = 32;
    dr_qos.resource_limits.max_instances = 1;
    dr_qos.resource_limits.max_samples_per_instance = 32;
    /* if there are more remote writers, you need to increase these limits */
    dr_qos.reader_resource_limits.max_remote_writers = 10;
    dr_qos.reader_resource_limits.max_remote_writers_per_instance = 10;
    dr_qos.history.depth = 32;

    /* Reliability QoS */
#ifdef USE_RELIABLE_QOS
    dr_qos.reliability.kind = DDS_RELIABLE_RELIABILITY_QOS;
#else
    dr_qos.reliability.kind = DDS_BEST_EFFORT_RELIABILITY_QOS;
#endif

    /* Only DDS_DATA_AVAILABLE_STATUS supported currently */
    datareader = subscriber->create_datareader(
                           application->topic,
                           dr_qos,
                           listener,
                           DDS_DATA_AVAILABLE_STATUS);

    if (datareader == NULL)
    {
        printf("datareader == NULL\n");
        goto done;
    }

    retcode = application->enable();
    if (retcode != DDS_RETCODE_OK)
    {
        printf("failed to enable application\n");
        goto done;
    }

    if (application->count != 0)
    {
        printf("Running for %d seconds, press Ctrl-C to exit\n",
               application->count);
        OSAPI_Thread_sleep(application->count * 1000);
    }
    else
    {
        int sleep_loop_count =  (24 * 60 * 60) / 2000;
        int sleep_loop_left = (24 * 60 * 60) % 2000;

        printf("Running for 24 hours, press Ctrl-C to exit\n");

        while (sleep_loop_count)
        {
            OSAPI_Thread_sleep(2000  * 1000); /* sleep is in ms */
            --sleep_loop_count;
        }

        OSAPI_Thread_sleep(sleep_loop_left * 1000);
    }

    done:

    if (application != NULL)
    {
        delete application;
    }
   
    if (listener != NULL)
    {
        delete listener;
    }

    //DataReaderQos is automatically disposed by destructor

    return 0;
}


#if 0
int main(int, char *[])
{
    NewRT::DDS::master()->init("./conf.xml",
        "./qos_profiles.xml");

    auto livelinessChangedHandler = [](NewRT::DDS::Sub::DataReader*,
        const NewRT::DDS::Sub::LivelinessChangedStatus&)
    {
        std::cout << " " << tn << " " << std::this_thread::get_id() << " liveliness changed" << std::endl;
    };
    


    /*
    NewRT::DDS::Sub::Subscriber(tn,FooTypePlugin_get())
        .enterCallbackEdit()
        .onData(dataFunc)
        .livelinessChanged(livelinessChangedHandler)
        .leaveCallbackEdit();
        */
        DDSManager::subscrib<Foo,FooDataReader>(tn,dataFunc,FooTypePlugin_get());
        
    
    {
        int sleep_loop_count =  (24 * 60 * 60) / 2000;
        int sleep_loop_left = (24 * 60 * 60) % 2000;

        printf("Running for 24 hours, press Ctrl-C to exit\n");

        while (sleep_loop_count)
        {
            OSAPI_Thread_sleep(2000  * 1000); /* sleep is in ms */
            --sleep_loop_count;
        }

        OSAPI_Thread_sleep(sleep_loop_left * 1000);
    }

    //dds::core::cond::WaitSet waitSet;
    //waitSet.dispatch(dds::core::Duration(20));
    return 0;
}
#else
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

    return subscriber_main_w_args(domain_id, udp_intf, peer, sleep_time, count);
}

#endif
