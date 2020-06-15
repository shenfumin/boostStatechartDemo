#include "ddsmanagerImpl.h"
using namespace NewRT::DDS;

#ifdef MICRO_DDS
DDS_DomainParticipantFactoryQos DDSManagerImpl::s_participantFactoryQos;
#endif
DDSManagerImpl::DDSManagerImpl(const std::string& cfgXmlFile, const std::string& qosXmlFile)
            : m_qosXmlFile(qosXmlFile)
            , m_cfgXmlFile(cfgXmlFile)
{
    pt::ptree tree;
    pt::read_xml(m_cfgXmlFile, tree);
    std::cout << "impl::impl m_cfgXmlFile!!!" <<m_cfgXmlFile<< std::endl;
    
#ifdef MICRO_DDS
    //init dds factory
    initializeFactory();
#endif

    // Create profiles
    for (pt::ptree::value_type &v : tree.get_child("dds_manager.profiles"))
    {
        auto isDefault = v.second.get("<xmlattr>.default", false);
        auto id = v.second.get<std::string>("<xmlattr>.id");
        auto value = v.second.get<std::string>("<xmlattr>.value");
#ifdef MICRO_DDS
        std::shared_ptr<Micro_provider> ptr = createQos(m_qosXmlFile,value);
        m_cfg.profiles[id] = {isDefault, value, ptr};
#else
        std::shared_ptr<QosProvider> provider = std::make_shared<QosProvider>(m_qosXmlFile, value);
        m_cfg.profiles[id] = {isDefault, value, provider};
#endif
    }

    // Create participants
    for (pt::ptree::value_type &v : tree.get_child("dds_manager.participants"))
    {
        auto isDefault = v.second.get("<xmlattr>.default", false);
        auto id = v.second.get<std::string>("<xmlattr>.id");
        auto domain = v.second.get<uint32_t>("<xmlattr>.domain");
        auto profile = v.second.get<std::string>("<xmlattr>.profile");
        auto it = m_cfg.profiles.find(profile);
        if (it == m_cfg.profiles.end())
        {
            throw CfgFileNotValidException();
        }
#ifdef MICRO_DDS
        auto participantQos = it->second.provider->participantQos.get();
        DDSDomainParticipant* ptr = createParticipant(domain, *participantQos);
        //DDSDomainParticipant* ptr = createParticipant(domain, *participantQos);
        m_cfg.participants[id] = {isDefault, domain, profile,ptr};
#else
        m_cfg.participants[id] = {isDefault, domain, profile,
            std::make_shared<DomainParticipant>(domain, it->second.provider->participant_qos())};
#endif
    }

    // Create Publishers
    for (pt::ptree::value_type &v : tree.get_child("dds_manager.publishers"))
    {
        auto isDefault = v.second.get("<xmlattr>.default", false);
        auto id = v.second.get<std::string>("<xmlattr>.id");
        auto participant = v.second.get<std::string>("<xmlattr>.participant");
        auto profile = v.second.get<std::string>("<xmlattr>.profile");
        auto itProfile = m_cfg.profiles.find(profile);
        if (itProfile == m_cfg.profiles.end())
        {
            throw CfgFileNotValidException();
        }
        auto itParticipant = m_cfg.participants.find(participant);
        if (itParticipant == m_cfg.participants.end())
        {
            throw CfgFileNotValidException();
        }
#ifdef MICRO_DDS
        auto publisherQos = getPublisherQos(itProfile->second.provider.get());
        DDS_StatusMask mask = DDS_STATUS_MASK_NONE;
        DDSPublisher* ptr = (itParticipant->second.participant->create_publisher(publisherQos,NULL,DDS_STATUS_MASK_NONE));
        
        m_cfg.publishers[id] = {id, isDefault, participant, profile,ptr};
#else
        m_cfg.publishers[id] = {id, isDefault, participant, profile,
            std::make_shared<Publisher>(*(itParticipant->second.participant),
                itProfile->second.provider->publisher_qos())};
#endif
    }

    // Create Subscribers
    for (pt::ptree::value_type &v : tree.get_child("dds_manager.subscribers"))
    {
        auto isDefault = v.second.get("<xmlattr>.default", false);
        auto id = v.second.get<std::string>("<xmlattr>.id");
        auto participant = v.second.get<std::string>("<xmlattr>.participant");
        auto profile = v.second.get<std::string>("<xmlattr>.profile");
        auto itProfile = m_cfg.profiles.find(profile);
        if (itProfile == m_cfg.profiles.end())
        {
            throw CfgFileNotValidException();
        }
        auto itParticipant = m_cfg.participants.find(participant);
        if (itParticipant == m_cfg.participants.end())
        {
            throw CfgFileNotValidException();
        }
        
#ifdef MICRO_DDS
//        if(id != "subscriber_builtin")
        {
            auto subscriberQos = getSubscriberQos(itProfile->second.provider.get());
            DDS_StatusMask mask = DDS_SAMPLE_LOST_STATUS;
            DDSSubscriber* ptr = (itParticipant->second.participant->create_subscriber(
                subscriberQos,NULL,mask));
            m_cfg.subscribers[id] = {id, isDefault, participant, profile,ptr};
        }

#else
        if(id == "subscriber_builtin")
        {
            std::shared_ptr<Subscriber> buildin_subscribe(new Subscriber(dds::sub::builtin_subscriber(*(itParticipant->second.participant))));

            m_cfg.subscribers[id] = {id, isDefault, participant, profile,
            buildin_subscribe};
        }
        else{
            m_cfg.subscribers[id] = {id, isDefault, participant, profile,
                std::make_shared<Subscriber>(*(itParticipant->second.participant),
                    itProfile->second.provider->subscriber_qos())};
        }
#endif
    }

    // Create subscriber topics
    for (pt::ptree::value_type &v : tree.get_child("dds_manager.sub_topics"))
    {
        auto id = v.second.get<std::string>("<xmlattr>.id");
        auto profile = v.second.get<std::string>("<xmlattr>.profile");
        auto subscriber = v.second.get("<xmlattr>.subscriber", std::string());
        if (m_cfg.subscribers.find(subscriber) == m_cfg.subscribers.end()
            || m_cfg.profiles.find(profile) == m_cfg.profiles.end())
        {
            throw CfgFileNotValidException();
        }
        m_cfg.subTopics[id].push_back({subscriber, profile});
    }

    // Create publisher topics
    for (pt::ptree::value_type &v : tree.get_child("dds_manager.pub_topics"))
    {
        auto id = v.second.get<std::string>("<xmlattr>.id");
        auto profile = v.second.get<std::string>("<xmlattr>.profile");
        auto publisher = v.second.get("<xmlattr>.publisher", std::string());
        if (m_cfg.publishers.find(publisher) == m_cfg.publishers.end()
            || m_cfg.profiles.find(profile) == m_cfg.profiles.end())
        {
            throw CfgFileNotValidException();
        }
        m_cfg.pubTopics[id].push_back({publisher, profile});
    }
}


#ifdef MICRO_DDS

void DDSManagerImpl::loadDefaultWriteQosValue(DDS_DataWriterQos* pQos)
{
    pQos->reliability.kind = DDS_RELIABLE_RELIABILITY_QOS;
    pQos->resource_limits.max_samples = 320;
    pQos->resource_limits.max_samples_per_instance = 32;
    pQos->resource_limits.max_instances = 10;
    pQos->history.depth = 32;
    pQos->liveliness.kind = DDS_AUTOMATIC_LIVELINESS_QOS;
    pQos->liveliness.lease_duration = DDS_DURATION_INFINITE;
}

void DDSManagerImpl::loadDefaultReaderQosValue(DDS_DataReaderQos* pQos)
{
    pQos->reliability.kind = DDS_RELIABLE_RELIABILITY_QOS;
    pQos->resource_limits.max_samples = 320;
    pQos->resource_limits.max_samples_per_instance = 32;
    pQos->resource_limits.max_instances = 10;
    pQos->reader_resource_limits.max_remote_writers = 10;
    pQos->reader_resource_limits.max_remote_writers_per_instance = 10;
    pQos->history.depth = 32;
    pQos->liveliness.kind = DDS_AUTOMATIC_LIVELINESS_QOS;
    pQos->liveliness.lease_duration = DDS_DURATION_INFINITE;
}

void DDSManagerImpl::loadDefaultParticipantQosValue(DDS_DomainParticipantQos* pQos)
{
    DDSDomainParticipantFactory* factory = DDSDomainParticipantFactory::get_instance();
    factory->get_qos(s_participantFactoryQos);
    s_participantFactoryQos.resource_limits.max_participants = 10;
    factory->set_qos(s_participantFactoryQos);

    if (!pQos->discovery.discovery.name.set_name("dpde"))
    {
        printf("failed to set discovery plugin name\n");
    }

    pQos->discovery.initial_peers.maximum(2);
    pQos->discovery.initial_peers.length(2);
    *pQos->discovery.initial_peers.get_reference(0) = DDS_String_dup("_udp://239.255.0.1");
    *pQos->discovery.initial_peers.get_reference(1) = DDS_String_dup("_udp://127.0.0.1");
    pQos->discovery.accept_unknown_peers = true;
  
    /* if there are more remote or local endpoints, you need to increase these limits */
    pQos->resource_limits.max_destination_ports = 32;
    pQos->resource_limits.max_receive_ports = 32;
    pQos->resource_limits.local_topic_allocation = 10;
    pQos->resource_limits.local_type_allocation = 10;
    pQos->resource_limits.local_reader_allocation = 10;
    pQos->resource_limits.local_writer_allocation = 10;
    pQos->resource_limits.remote_participant_allocation = 80;
    pQos->resource_limits.remote_reader_allocation = 80;
    pQos->resource_limits.remote_writer_allocation = 80;
}

std::shared_ptr<Micro_provider> DDSManagerImpl::createQos(std::string qosXmlFile,std::string profileName)
{
    std::shared_ptr<Micro_provider> ptrProvider = std::make_shared<Micro_provider>(Micro_provider());
    const std::string sepStr = "::";
    pt::ptree tree;
    pt::read_xml(qosXmlFile, tree);


    int posSep = profileName.find(sepStr);
    if(posSep > 0)
    {
        profileName = profileName.substr(posSep+sepStr.length(),profileName.length());
    }
    
    // Create qos
    for (pt::ptree::value_type &p : tree.get_child("dds.qos_library"))
    {
        if ("qos_profile" == p.first)
        {
            std::string proName = p.second.get<std::string>("<xmlattr>.name");
            if(proName != profileName) continue;
            for(pt::ptree::value_type &qosIter:  p.second)
            {
                if("participant_qos" == qosIter.first)
                {
                    auto participantName = qosIter.second.get<std::string>("participant_name.name");
                    auto participantRoleName = qosIter.second.get<std::string>("participant_name.role_name");
                    auto participantQos = new DDS_DomainParticipantQos(DDS_PARTICIPANT_QOS_DEFAULT);
                    loadDefaultParticipantQosValue(participantQos);

                    strcpy(participantQos->participant_name.name,participantName.c_str());
                    if(qosIter.second.get_child_optional("property.value"))
                    {
                        auto participantProperty = qosIter.second.get_child("property.value");
                        for (pt::ptree::value_type &propertyValue: participantProperty) {
                            std::string elementName = propertyValue.second.get<std::string>("name");
                            std::string valueList = propertyValue.second.get<std::string>("value");
                            if (elementName == "dds.transport.UDPv4.builtin.parent.allow_interfaces") {
                                setAllowInterface(valueList);
                            }
                        }
                    }
                    
                    ptrProvider->participantQos=std::make_shared<DDS_DomainParticipantQos>(*participantQos);
                }
                else if("datawriter_qos" == qosIter.first)
                {

                    auto dataWriterName = qosIter.second.get<std::string>("publication_name.name");
                    auto dataWriterQos = new DDS_DataWriterQos(DDS_DATAWRITER_QOS_DEFAULT);
                    loadDefaultWriteQosValue(dataWriterQos);
                    
                    ptrProvider->dataWriterQos = std::make_shared<DDS_DataWriterQos>(*dataWriterQos);
                }
                else if("datareader_qos" == qosIter.first)
                {
                    auto dataReaderName = qosIter.second.get<std::string>("subscription_name.name");
                    auto dataReaderQos = new DDS_DataReaderQos(DDS_DATAREADER_QOS_DEFAULT);
                    loadDefaultReaderQosValue(dataReaderQos);
                    
                    ptrProvider->dataReaderQos = std::make_shared<DDS_DataReaderQos>(*dataReaderQos);
                }
                else if("subscriber_qos" == qosIter.first)
                {
                    auto subscriberName = qosIter.second.get<std::string>("partition.element.name");
                    auto subscriberQos = new DDS_SubscriberQos(DDS_SUBSCRIBER_QOS_DEFAULT);
                    subscriberQos->management.is_hidden = DDS_BOOLEAN_TRUE;
                    ptrProvider->subscriberQos = std::make_shared<DDS_SubscriberQos>(*subscriberQos);
                }
                else if("publisher_qos" == qosIter.first)
                {
                    std::cout<<"datawriter_qos.second:"<<p.second.data()<<std::endl;

                    auto publisherName = qosIter.second.get<std::string>("partition.element.name");
                    auto publisherQos = new DDS_PublisherQos(DDS_PUBLISHER_QOS_DEFAULT);
                    ptrProvider->publisherQos = std::make_shared<DDS_PublisherQos>(*publisherQos);
                }
            }

        }
    }
    return ptrProvider;
        
}



DDS_PublisherQos DDSManagerImpl::getPublisherQos(Micro_provider* provider)
{
    assert(provider);
    if(provider->publisherQos == NULL)//publisher qos is not define in xml,so use default qos
    {
        return DDS_PUBLISHER_QOS_DEFAULT;
    }
    return *provider->publisherQos;
}

DDS_SubscriberQos DDSManagerImpl::getSubscriberQos(Micro_provider* provider)
{
    assert(provider);
    if(provider->subscriberQos == NULL)//subscriber qos is not define in xml,so use default qos
    {
        return DDS_SUBSCRIBER_QOS_DEFAULT;
    }
    return *provider->subscriberQos;
}


bool DDSManagerImpl::initializeFactory()
{
    RTRegistry *registry = NULL;
    DPDE_DiscoveryPluginProperty dpde_properties;
    DDS_DomainParticipantFactoryQos dpf_qos;
    //UDP_InterfaceFactoryProperty *udp_property = NULL;
    //OSAPI_Log_set_verbosity(OSAPI_LOG_VERBOSITY_DEBUG);
    OSAPI_Log_set_verbosity(OSAPI_LOG_VERBOSITY_SILENT);
    DDSDomainParticipantFactory* factory = DDSDomainParticipantFactory::get_instance();
    registry = factory->get_registry();

    if (!registry->register_component("wh",
                            WHSMHistoryFactory::get_interface(),
                            NULL, NULL))
    {
        printf("failed to register wh\n");
    }

    if (!registry->register_component("rh",
                            RHSMHistoryFactory::get_interface(),
                            NULL, NULL))
    {
        printf("failed to register rh\n");
    }

    /* Configure UDP transport's allowed interfaces */
    if (!registry->unregister(NETIO_DEFAULT_UDP_NAME, NULL, NULL))
    {
        printf("failed to unregister udp\n");
    }

    //this will free in
    /*
    udp_property = new UDP_InterfaceFactoryProperty();
    if (udp_property! == NULL)
    {
        printf("failed to allocate udp properties\n");
    }
    */

    if (!m_udpProperty.property.allow_interface.maximum(2))
    {
        printf("failed to set allow_interface maximum\n");
    }
    if (!m_udpProperty.property.allow_interface.length(2))
    {
        printf("failed to set allow_interface length\n");
    }
    *m_udpProperty.property.allow_interface.get_reference(0) = DDS_String_dup("lo");

    *m_udpProperty.property.allow_interface.get_reference(1) =
            DDS_String_dup("eno1");

    if (!registry->register_component(NETIO_DEFAULT_UDP_NAME,
                            UDPInterfaceFactory::get_interface(),
                            &m_udpProperty.property._parent._parent,
                            NULL))
    {
        printf("failed to register udp\n");
    }
    

    factory->get_qos(dpf_qos);
    dpf_qos.entity_factory.autoenable_created_entities = DDS_BOOLEAN_FALSE;
    factory->set_qos(dpf_qos);


    if (!registry->register_component(
                            "dpde",
                            DPDEDiscoveryFactory::get_interface(),
                            &dpde_properties._parent,
                            NULL))
    {
        printf("failed to register dpde\n");
    }
    return true;
}


DDSDomainParticipant* DDSManagerImpl::createParticipant(DDS_DomainId_t dominId,DDS_DomainParticipantQos& qos)
{
//    DDS_DomainParticipantQos dp_qos;

//    DPDE_DiscoveryPluginProperty dpde_properties;
    
    DDSDomainParticipantFactory* factory = DDSDomainParticipantFactory::get_instance();
    
    DDSDomainParticipant* pParticipant = factory->create_participant(
                            (DDS_DomainId_t)dominId,
                            qos, 
                            NULL,
                            DDS_STATUS_MASK_NONE);
    return pParticipant;
}
#endif


#ifdef MICRO_DDS
DDSDomainParticipant* DDSManagerImpl::participant(const std::string& topic,
    const std::string& publisherOrSubscriberId, bool sub)
#else
DomainParticipant& DDSManagerImpl::participant(const std::string& topic,
    const std::string& publisherOrSubscriberId, bool sub)
#endif
{
    std::string participantId;
    if (sub)
    {
        if (publisherOrSubscriberId.empty())
        {
            auto it = m_cfg.subTopics.find(topic);
            if (it != m_cfg.subTopics.end())
            {
                if (it->second.size() > 0)
                {
                    participantId = m_cfg.subscribers[it->second.front().subscriber].participant;
                }
            }
        }
        else
        {
            auto it = m_cfg.subscribers.find(publisherOrSubscriberId);
            if (it != m_cfg.subscribers.end())
            {
                participantId = it->second.participant;
            }
        }
    }
    else
    {
        if (publisherOrSubscriberId.empty())
        {
            auto it = m_cfg.pubTopics.find(topic);
            if (it != m_cfg.pubTopics.end())
            {
                if (it->second.size() > 0)
                {
                    participantId = m_cfg.publishers[it->second.front().publisher].participant;
                }
            }
        }
        else
        {
            auto it = m_cfg.publishers.find(publisherOrSubscriberId);
            if (it != m_cfg.publishers.end())
            {
                participantId = it->second.participant;
            }

        }
    }
    if (participantId.empty())
    {
        return default_participant();
    }
    else
    {
#ifdef MICRO_DDS
        return (m_cfg.participants[participantId].participant);
#else
        return *(m_cfg.participants[participantId].participant);
#endif
    }
}

#ifdef MICRO_DDS
std::shared_ptr<Micro_provider> DDSManagerImpl::getQosProvider(const std::string& topic,
            const std::string& publisherOrSubscriberId, bool sub)
{
    if (sub)
    {
        auto it = m_cfg.subTopics.find(topic);
        if (it != m_cfg.subTopics.end())
        {
            for (auto &st : it->second)
            {
                if (st.subscriber == publisherOrSubscriberId)
                {
                    return (m_cfg.profiles[st.profile].provider);
                }
            }
            return (m_cfg.profiles[it->second.front().profile].provider);
        }
    }
    else
    {
        auto it = m_cfg.pubTopics.find(topic);
        if (it != m_cfg.pubTopics.end())
        {
            for (auto &pt : it->second)
            {
                if (pt.publisher == publisherOrSubscriberId)
                {
                    return (m_cfg.profiles[pt.profile].provider);
                }
            }
            return (m_cfg.profiles[it->second.front().profile].provider);
        }
    }
    return default_qosProvider();
}

#else

QosProvider& DDSManagerImpl::qosProvider(const std::string& topic,
            const std::string& publisherOrSubscriberId, bool sub)
{
    if (sub)
    {
        auto it = m_cfg.subTopics.find(topic);
        if (it != m_cfg.subTopics.end())
        {
            for (auto &st : it->second)
            {
                if (st.subscriber == publisherOrSubscriberId)
                {
                    return *(m_cfg.profiles[st.profile].provider);
                }
            }
            return *(m_cfg.profiles[it->second.front().profile].provider);
        }
    }
    else
    {
        auto it = m_cfg.pubTopics.find(topic);
        if (it != m_cfg.pubTopics.end())
        {
            for (auto &pt : it->second)
            {
                if (pt.publisher == publisherOrSubscriberId)
                {
                    return *(m_cfg.profiles[pt.profile].provider);
                }
            }
            return *(m_cfg.profiles[it->second.front().profile].provider);
        }
    }
    return default_qosProvider();
}
#endif



DDSManagerImpl::Cfg::publisher_t& DDSManagerImpl::getPublisher(const std::string& topic,
            const std::string& publisherId)
{
    if (publisherId.empty())
    {
        auto it = m_cfg.pubTopics.find(topic);
        if (it == m_cfg.pubTopics.end())
        {
            return default_publisher();
        }
        else
        {
            return m_cfg.publishers[it->second.front().publisher];
        }
    }
    else
    {
        auto it = m_cfg.publishers.find(publisherId);
        if (it == m_cfg.publishers.end())
        {
            throw CfgFileNotValidException();
        }
        else
        {
            return it->second;
        }
    }
}

DDSManagerImpl::Cfg::subscriber_t& DDSManagerImpl::getSubscriber(const std::string& topic,
    const std::string& subscriberId)
{
    if (subscriberId.empty())
    {
        auto it = m_cfg.subTopics.find(topic);
        if (it == m_cfg.subTopics.end())
        {
            return default_subscriber();
        }
        else
        {
            return m_cfg.subscribers[it->second.front().subscriber];
        }
    }
    else
    {
        auto it = m_cfg.subscribers.find(subscriberId);
        if (it == m_cfg.subscribers.end())
        {
            throw CfgFileNotValidException();
        }
        else
        {
            return it->second;
        }
    }
}


#ifdef MICRO_DDS

void DDSManagerImpl::splitString(const std::string& s, std::vector<std::string>& v, const std::string& c)
{
    std::string::size_type pos1, pos2;
    pos2 = s.find(c);
    pos1 = 0;
    while(std::string::npos != pos2)
    {
        v.push_back(s.substr(pos1, pos2-pos1));

        pos1 = pos2 + c.size();
        pos2 = s.find(c, pos1);
    }
    if(pos1 != s.length())
        v.push_back(s.substr(pos1));
}

void DDSManagerImpl::setAllowInterface(std::string list)
{
    RTRegistry *registry = NULL;
    DPDE_DiscoveryPluginProperty dpde_properties;
    DDS_DomainParticipantFactoryQos dpf_qos;
    UDP_InterfaceFactoryProperty *udp_property = NULL;

    std::vector<std::string> vList;
    std::vector<std::string> vInterfaceList;
    splitString(list, vList,",");

    if( !vList[1].empty())
    {
        int interfaceCount = 0;
        for(int i = 0;i<vList.size();i++)
        {
            if(vList[i].find('.') == std::string::npos)
            {
                interfaceCount++;
                vInterfaceList.push_back(vList[i]);
            }
        };
        //interface[0] is loop back "lo",others is user define
        if (!m_udpProperty.property.allow_interface.maximum(interfaceCount+1))
        {
            printf("failed to set allow_interface maximum\n");
        }
        if (!m_udpProperty.property.allow_interface.length(interfaceCount+1))
        {
            printf("failed to set allow_interface length\n");
        }
        for(int i = 0;i<interfaceCount;i++){
            *m_udpProperty.property.allow_interface.get_reference(i+1) =
                    DDS_String_dup(vInterfaceList[i].c_str());
        }
    }
}


void DDSManagerImpl::finishFactoryEngine()
{
    DDSDomainParticipantFactory* factory = DDSDomainParticipantFactory::get_instance();
    UDP_InterfaceFactoryProperty *udp_property = NULL;
    DDS_ReturnCode_t retcode;
    auto it = m_cfg.participants.begin();
    while(it != m_cfg.participants.end())
    {
        if (it->second.participant != NULL)
        {
            //this may delete subscriber and publisher by the participant
            //so we don't delete suberscriber and publisher alone
            retcode = it->second.participant->delete_contained_entities();
            if (retcode != DDS_RETCODE_OK)
            {
                std::cout<<"failed to delete contained entities,retcode="<<retcode<<std::endl;
            }

            
            retcode =
                factory->delete_participant(it->second.participant);
            if (retcode != DDS_RETCODE_OK)
            {
                std::cout<<"failed to delete participant retcode:"<<retcode<<std::endl;
                return;
            }
            it->second.participant = NULL;
        }
        it ++;         
    }
    
    RTRegistry* registry = factory->get_registry();
    udp_property = &m_udpProperty.property;
    if (!registry->unregister(NETIO_DEFAULT_UDP_NAME,
                        (RT_ComponentFactoryProperty**)&udp_property,
                        NULL))
    {
        std::cout<<"failed to unregister udp"<<std::endl;
        return;
    }
    /*
    if (udp_property != NULL)
    {
        delete udp_property;
        udp_property = NULL;
    }
    */

    if (!registry->unregister("dpde", NULL, NULL))
    {
        std::cout<<"failed to unregister dpde"<<std::endl;
        return;
    }
    if (!registry->unregister("rh", NULL, NULL))
    {
        std::cout<<"failed to unregister rh"<<std::endl;
        return;
    }
    if (!registry->unregister("wh", NULL, NULL))
    {
        std::cout<<"failed to unregister wh"<<std::endl;
        return;
    }

    retcode = DDSTheParticipantFactory->finalize_instance();
    if (retcode != DDS_RETCODE_OK)
    {
        std::cout<<"failed to finalize instance,retcode="<<retcode<<std::endl;
        return;
    }
}
#endif
