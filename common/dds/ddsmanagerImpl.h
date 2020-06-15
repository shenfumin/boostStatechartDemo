#pragma once

#include "exception.h"
#include <map>
#ifdef MICRO_DDS
#include <cassert>
#include "rti_me_cpp.hxx"
#include <iostream>
#else
#include <dds/pub/ddspub.hpp>
#include <dds/sub/ddssub.hpp>
#include <dds/domain/ddsdomain.hpp>
#include <dds/core/ddscore.hpp>
#include <dds/topic/ddstopic.hpp>
#include <dds/core/QosProvider.hpp>
#include <dds/topic/qos/TopicQos.hpp>
#include <dds/domain/qos/DomainParticipantQos.hpp>
#include <dds/pub/qos/PublisherQos.hpp>
#include <dds/pub/qos/DataWriterQos.hpp>
#include <dds/sub/qos/SubscriberQos.hpp>
#include <dds/sub/qos/DataReaderQos.hpp>
#include <rti/core/ListenerBinder.hpp>

using QosProvider       =   dds::core::QosProvider;
using DomainParticipant =   dds::domain::DomainParticipant;
using Publisher         =   dds::pub::Publisher;
using Subscriber        =   dds::sub::Subscriber;
#endif
#include <boost/filesystem.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>
//#include "ddsmaster.h"
namespace fs = boost::filesystem;
namespace pt = boost::property_tree;


namespace NewRT
{
namespace DDS
{
#ifdef MICRO_DDS
    struct Micro_provider
    {
        std::shared_ptr<DDS_DomainParticipantQos>   participantQos;
        std::shared_ptr<DDS_PublisherQos>           publisherQos;
        std::shared_ptr<DDS_SubscriberQos>          subscriberQos;
        std::shared_ptr<DDS_DataWriterQos>          dataWriterQos;
        std::shared_ptr<DDS_DataReaderQos>          dataReaderQos;
        
    };
#endif
    
class DDSManagerImpl
{
    struct Cfg
    {
        struct profile_t
        {
            bool isDefault = false;
            std::string value;
#ifdef MICRO_DDS
            std::shared_ptr<Micro_provider> provider = nullptr;
#else
            std::shared_ptr<QosProvider> provider = nullptr;
#endif
        };
        std::map<std::string, profile_t> profiles;
        struct participant_t
        {
            bool isDefault = false;
            uint32_t domain = 0;
            std::string profile;
#ifndef MICRO_DDS
            std::shared_ptr<DomainParticipant> participant = nullptr;
#else
            DDSDomainParticipant* participant = nullptr;
#endif
        };
        std::map<std::string, participant_t> participants;
        struct publisher_t
        {
            std::string id;
            bool isDefault = false;
            std::string participant;
            std::string profile;
#ifdef MICRO_DDS
            DDSPublisher* publisher = nullptr;
#else
            std::shared_ptr<Publisher> publisher = nullptr;
#endif
        };
        std::map<std::string, publisher_t> publishers;
        struct subscriber_t
        {
            std::string id;
            bool isDefault = false;
            std::string participant;
            std::string profile;
#ifdef MICRO_DDS
            DDSSubscriber* subscriber = nullptr;
            //DDSSubscriber* subscriber = nullptr;
#else
            std::shared_ptr<Subscriber> subscriber = nullptr;
#endif
        };
        std::map<std::string, subscriber_t> subscribers;
        struct sub_topic_t
        {
            std::string subscriber;
            std::string profile;
        };
        std::map<std::string, std::list<sub_topic_t>> subTopics;
        struct pub_topic_t
        {
            std::string publisher;
            std::string profile;
        };
        std::map<std::string, std::list<pub_topic_t>> pubTopics;
    } m_cfg;

        std::string m_qosXmlFile;
        std::string m_cfgXmlFile;
#ifdef MICRO_DDS
        struct {
            UDP_InterfaceFactoryProperty property;
        } m_udpProperty;
        static DDS_DomainParticipantFactoryQos s_participantFactoryQos;
    public:
        

        bool initializeFactory();
        
        std::shared_ptr<Micro_provider> createQos(std::string qosXmlFile,std::string profileName);
        
        DDS_PublisherQos getPublisherQos(Micro_provider* provider);

        DDS_SubscriberQos getSubscriberQos(Micro_provider* provider);

        DDSDomainParticipant* createParticipant(DDS_DomainId_t dominId,DDS_DomainParticipantQos& qos);
#endif
    public:
        DDSManagerImpl(const std::string& cfgXmlFile, const std::string& qosXmlFile);




#ifdef MICRO_DDS
        DDSDomainParticipant* participant(const std::string& topic,
            const std::string& publisherOrSubscriberId, bool sub);
        
        std::shared_ptr<Micro_provider> getQosProvider(const std::string& topic,
            const std::string& publisherOrSubscriberId, bool sub);

        DDSPublisher* createPublisher(const std::string& topic,
            const std::string& publisherId)
        {
            return (getPublisher(topic, publisherId).publisher);

        }

        DDSSubscriber* createSubscriber(const std::string& topic,
            const std::string& subscriberId)
        {
            return (getSubscriber(topic, subscriberId).subscriber);
        }
#else
        DomainParticipant& participant(const std::string& topic,
            const std::string& publisherOrSubscriberId, bool sub);

        QosProvider& qosProvider(const std::string& topic,
            const std::string& publisherOrSubscriberId, bool sub);

        
        Publisher& publisher(const std::string& topic,
            const std::string& publisherId)
        {
            return *(getPublisher(topic, publisherId).publisher);

        }

        Subscriber& subscriber(const std::string& topic,
            const std::string& subscriberId)
        {
            return *(getSubscriber(topic, subscriberId).subscriber);
        }
#endif

        std::string getTopicUniqueId(const std::string& topic,
            const std::string& publisherOrSubscriberId, bool isSubscriber)
        {
            //std::cout << " getTopicUniqueId:"<<topic<<"isSubscriber:"<<isSubscriber<< std::endl;
            if (isSubscriber)
            {
                return topic + "_" + getSubscriber(topic, publisherOrSubscriberId).id + "_sub";
            }
            else
            {
                return topic + "_" + getPublisher(topic, publisherOrSubscriberId).id + "_pub";
            }
        }

    private:
        Cfg::publisher_t& getPublisher(const std::string& topic,
            const std::string& publisherId);
        

        Cfg::subscriber_t& getSubscriber(const std::string& topic,
            const std::string& subscriberId);

        template<typename T>
        T& findDefault(std::map<std::string, T>& m)
        {
            for (auto &it : m)
            {
                if (it.second.isDefault)
                {
                    return it.second;
                }
            }
            // No default, find the begin
            if (m.size() == 0)
            {
                throw CfgFileNotValidException();
            }
            else
            {
                return m.begin()->second;
            }
        }
        
        Cfg::publisher_t& default_publisher()
        {
            //std::cout<<"[liubangguo] get default_publisher"<<std::endl;
            return findDefault(m_cfg.publishers);
        }

        Cfg::subscriber_t& default_subscriber()
        {
            //std::cout<<"[liubangguo] get default_subscriber"<<std::endl;
            return findDefault(m_cfg.subscribers);
        }
        
#ifdef MICRO_DDS

        DDSDomainParticipant* default_participant()
        {
            //std::cout<<"[liubangguo] get default_participant"<<std::endl;
            return (findDefault(m_cfg.participants).participant);
        }

        std::shared_ptr<Micro_provider> default_qosProvider()
        {
            return (findDefault(m_cfg.profiles).provider);
        }

        void splitString(const std::string& s, std::vector<std::string>& v, const std::string& c);
        void setAllowInterface(std::string list);

        void finishFactoryEngine();
        
        void loadDefaultParticipantQosValue(DDS_DomainParticipantQos* pQos);
        
        void loadDefaultWriteQosValue(DDS_DataWriterQos* pQos);

        void loadDefaultReaderQosValue(DDS_DataReaderQos* pQos);

    public:
        ~DDSManagerImpl()
        {
            finishFactoryEngine();

        }
#else
        

        DomainParticipant& default_participant()
        {
            return *(findDefault(m_cfg.participants).participant);
        }

        QosProvider& default_qosProvider()
        {
            return *(findDefault(m_cfg.profiles).provider);
        }

        
#endif
    };
    
    
}
}
