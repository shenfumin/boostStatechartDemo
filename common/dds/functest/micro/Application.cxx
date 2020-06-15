#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif


#include "Application.h"
#include "HelloPlugin.h"
/*
#include "disc_dpde/disc_dpde_discovery_plugin.h"
#include "wh_sm/wh_sm_history.h"
#include "rh_sm/rh_sm_history.h"
#include "netio/netio_udp.h"
*/

#include "dds_cpp/dds_cpp_dpde.hxx"
#include "dds_cpp/dds_cpp_wh_sm.hxx"
#include "dds_cpp/dds_cpp_rh_sm.hxx"
#include "dds_cpp/dds_cpp_netio.hxx"

void
Application::help(char *appname)
{
    printf("%s [options]\n", appname);
    printf("options:\n");
    printf("-h                 - This text\n");
    printf("-domain <id>       - DomainId (default: 0)\n");
    printf("-udp_intf <intf>   - udp interface (no default)\n");
    printf("-peer <address>    - peer address (no default)\n");
    printf("-count <count>     - count (default -1)\n");
    printf("-sleep <ms>        - sleep between sends (default 1s)\n");
    printf("\n");
}

DDS_ReturnCode_t 
Application::initialize(const char *local_participant_name,
                        const char *remote_participant_name,
                        DDS_Long domain_id,
                        char *udp_intf,
                        char *peer,
                        DDS_Long sleep_time,
                        DDS_Long count)
{
    DDS_ReturnCode_t retcode;
    DDSDomainParticipantFactory *factory = NULL; 
    DDS_DomainParticipantFactoryQos dpf_qos;
    DDS_DomainParticipantQos dp_qos;
    DPDE_DiscoveryPluginProperty dpde_properties;
    DDS_Boolean success = DDS_BOOLEAN_FALSE;
    RTRegistry *registry = NULL;
    UDP_InterfaceFactoryProperty *udp_property = NULL;

    /* Uncomment to increase verbosity level:
       OSAPI_Log_set_verbosity(OSAPI_LOG_VERBOSITY_WARNING);
    */

    this->sleep_time = sleep_time;
    this->count = count;
    
    factory = DDSDomainParticipantFactory::get_instance();
    registry = factory->get_registry();

    if (!registry->register_component("wh",
                              WHSMHistoryFactory::get_interface(),
                              NULL, NULL))
    {
        printf("failed to register wh\n");
        goto done;
    }

    if (!registry->register_component("rh",
                              RHSMHistoryFactory::get_interface(),
                              NULL, NULL))
    {
        printf("failed to register rh\n");
        goto done;
    }

    /* Configure UDP transport's allowed interfaces */
    if (!registry->unregister(NETIO_DEFAULT_UDP_NAME, NULL, NULL))
    {
        printf("failed to unregister udp\n");
        goto done;
    }

    udp_property = new UDP_InterfaceFactoryProperty();
    if (udp_property == NULL)
    {
        printf("failed to allocate udp properties\n");
        goto done;
    }

    /* For additional allowed interface(s), increase maximum and length, and
       set interface below:
    */
    if (!udp_property->allow_interface.maximum(2))
    {
        printf("failed to set allow_interface maximum\n");
        goto done;
    }
    if (!udp_property->allow_interface.length(2))
    {
        printf("failed to set allow_interface length\n");
        goto done;
    }

    /* loopback interface */
#if defined(RTI_DARWIN)
    *udp_property->allow_interface.get_reference(0) = DDS_String_dup("lo0");
#elif defined (RTI_LINUX)
    *udp_property->allow_interface.get_reference(0) = DDS_String_dup("lo");
#elif defined (RTI_VXWORKS)
    *udp_property->allow_interface.get_reference(0) = DDS_String_dup("lo0");
#elif defined(RTI_WIN32)
    *udp_property->allow_interface.get_reference(0) = 
        DDS_String_dup("Loopback Pseudo-Interface 1");
#else
    *udp_property->allow_interface.get_reference(0) = DDS_String_dup("lo");
#endif

    if (udp_intf != NULL)
    { /* use interface supplied on command line */
        *udp_property->allow_interface.get_reference(1) =
            DDS_String_dup(udp_intf);
    }
    else
    {                /* use hardcoded interface */
#if defined(RTI_DARWIN)
        *udp_property->allow_interface.get_reference(1) = 
            DDS_String_dup("en1");
#elif defined (RTI_LINUX)
        *udp_property->allow_interface.get_reference(1) = 
            DDS_String_dup("eth0");
#elif defined (RTI_VXWORKS)
        *udp_property->allow_interface.get_reference(1) = 
            DDS_String_dup("motetsec0");
#elif defined(RTI_WIN32)
        *udp_property->allow_interface.get_reference(1) = 
            DDS_String_dup("Local Area Connection");
#else
        *udp_property->allow_interface.get_reference(1) = 
            DDS_String_dup("ce0");
#endif
    }

    if (!registry->register_component(NETIO_DEFAULT_UDP_NAME,
                              UDPInterfaceFactory::get_interface(),
                              &udp_property->_parent._parent,
                              NULL))
    {
        printf("failed to register udp\n");
        goto done;
    }

    factory->get_qos(dpf_qos);
    dpf_qos.entity_factory.autoenable_created_entities = DDS_BOOLEAN_FALSE;
    factory->set_qos(dpf_qos);

    if (peer == NULL)
    {
        peer = (char *)"127.0.0.1"; /* default to loopback */
    }

    if (!registry->register_component(
                              "dpde",
                              DPDEDiscoveryFactory::get_interface(),
                              &dpde_properties._parent,
                              NULL))
    {
        printf("failed to register dpde\n");
        goto done;
    }

    if (!dp_qos.discovery.discovery.name.set_name("dpde"))
    {
        printf("failed to set discovery plugin name\n");
        goto done;
    }

    dp_qos.discovery.initial_peers.maximum(1);
    dp_qos.discovery.initial_peers.length(1);
    *dp_qos.discovery.initial_peers.get_reference(0) = DDS_String_dup(peer);

    /* if there are more remote or local endpoints, you need to increase these limits */
    dp_qos.resource_limits.max_destination_ports = 32;
    dp_qos.resource_limits.max_receive_ports = 32;
    dp_qos.resource_limits.local_topic_allocation = 1;
    dp_qos.resource_limits.local_type_allocation = 1;
    dp_qos.resource_limits.local_reader_allocation = 1;
    dp_qos.resource_limits.local_writer_allocation = 1;
    dp_qos.resource_limits.remote_participant_allocation = 8;
    dp_qos.resource_limits.remote_reader_allocation = 8;
    dp_qos.resource_limits.remote_writer_allocation = 8;

    this->participant = factory->create_participant(
                                    (DDS_DomainId_t)domain_id,
                                    dp_qos, 
                                    NULL,
                                    DDS_STATUS_MASK_NONE);

    if (this->participant == NULL)
    {
        printf("failed to create participant\n");
        goto done;
    }

    strcpy(this->type_name,"HelloWorld");

    retcode = this->participant->register_type(this->type_name, 
                                               HelloWorldTypePlugin_get());
    if (retcode != DDS_RETCODE_OK)
    {
        printf("failed to register type: %s\n", "test_type");
        goto done;
    }

    strcpy(this->topic_name, "HelloWorld");
    this->topic = this->participant->create_topic(
                                               this->topic_name,
                                               this->type_name,
                                               DDS_TOPIC_QOS_DEFAULT, 
                                               NULL,
                                               DDS_STATUS_MASK_NONE);
    if (this->topic == NULL)
    {
        printf("topic == NULL\n");
        goto done;
    }

    success = DDS_BOOLEAN_TRUE;

  done:
    
    if (!success)
    {
        if (udp_property != NULL)
        {
            delete udp_property;
            udp_property = NULL;
        }
    }

    return (success ? DDS_RETCODE_OK : DDS_RETCODE_ERROR);
}

DDS_ReturnCode_t
Application::enable()
{
    DDS_ReturnCode_t retcode;

    retcode = this->participant->enable();
    if (retcode != DDS_RETCODE_OK)
    {
        printf("failed to enable entity\n");
    }

    return retcode;
}

Application::Application()
{
    this->participant = NULL;
    this->topic = NULL;
    this->topic_name[0] = '\0';
    this->type_name[0] = '\0';
    this->sleep_time = 1000;
    this->count = 0;
}


Application::~Application()
{
    DDS_ReturnCode_t retcode;
    RTRegistry *registry = NULL;
    UDP_InterfaceFactoryProperty *udp_property = NULL;

    if (this->participant != NULL)
    {
        retcode = this->participant->delete_contained_entities();
        if (retcode != DDS_RETCODE_OK)
        {
            printf("failed to delete contained entities (retcode=%d)\n",retcode);
        }

        retcode =
            DDSTheParticipantFactory->delete_participant(this->participant);
        if (retcode != DDS_RETCODE_OK)
        {
            printf("failed to delete participant: %d\n", retcode);
            return;
        }
        this->participant = NULL;
    }

    registry = (DDSDomainParticipantFactory::get_instance())->get_registry();

    if (!registry->unregister(NETIO_DEFAULT_UDP_NAME,
                              (RT_ComponentFactoryProperty**)&udp_property, 
                              NULL))
    {
       printf("failed to unregister udp\n");
       return;
    }
    if (udp_property != NULL)
    {
        delete udp_property;
        udp_property = NULL;
    }
    if (!registry->unregister("dpde", NULL, NULL))
    {
        printf("failed to unregister dpde\n");
        return;
    }
    if (!registry->unregister("rh", NULL, NULL))
    {
        printf("failed to unregister rh\n");
        return;
    }
    if (!registry->unregister("wh", NULL, NULL))
    {
        printf("failed to unregister wh\n");
        return;
    }

    retcode = DDSTheParticipantFactory->finalize_instance();
    if (retcode != DDS_RETCODE_OK)
    {
        printf("failed to finalize instance (retcode=%d)\n",retcode);
        return;
    }
}

