
//#include "ddsmanager.h"
#include "ddsmaster.h"
#include "ddsmanagerImpl.h"

#include <boost/filesystem.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>
namespace fs = boost::filesystem;
namespace pt = boost::property_tree;
using namespace NewRT::DDS;

namespace NewRT
{
namespace DDS
{
    Master::Master()
        : m_impl(nullptr)
    {
    }

    bool Master::init(const std::string& cfgXmlFile, const std::string& qosXmlFile)
    {
        //std::cout << "Master::init cfgXmlFile"<<cfgXmlFile << std::endl;
        if (m_impl) // already initialized
        {
            return true;
        }

        if (fs::exists(cfgXmlFile) && fs::exists(qosXmlFile))
        {
            m_impl = std::make_unique<DDSManagerImpl>(cfgXmlFile, qosXmlFile);
            return true;
        }
        return false;
    }
    
#ifdef MICRO_DDS
    DDSDomainParticipant* Master::participant(const std::string& topic,
        const std::string& publisherOrSubscriberId, bool isSubscriber)
    {
        return m_impl->participant(topic, publisherOrSubscriberId, isSubscriber);
    }
    
    std::shared_ptr<Micro_provider> Master::getQosProvider(const std::string& topic,
        const std::string& publisherOrSubscriberId, bool isSubscriber)
    {
        return m_impl->getQosProvider(topic, publisherOrSubscriberId, isSubscriber);
    }
    
    DDSPublisher* Master::createPublisher(const std::string& topic,
        const std::string& publisherId)
    {
        std::cout<<"[NewRT]createPublisher,topic:"<<topic<<std::endl;
        return m_impl->createPublisher(topic, publisherId);
    }

    DDSSubscriber* Master::createSubscriber(const std::string& topic,
        const std::string& subscriberId)
    {
        std::cout<<"[NewRT]createSubscriber,topic:"<<topic<<std::endl;
        return m_impl->createSubscriber(topic, subscriberId);
    }
       
#else

    DomainParticipant& Master::participant(const std::string& topic,
        const std::string& publisherOrSubscriberId, bool isSubscriber)
    {
        return m_impl->participant(topic, publisherOrSubscriberId, isSubscriber);
    }

    QosProvider& Master::qosProvider(const std::string& topic,
        const std::string& publisherOrSubscriberId, bool isSubscriber)
    {
        return m_impl->qosProvider(topic, publisherOrSubscriberId, isSubscriber);
    }

    Publisher& Master::publisher(const std::string& topic,
        const std::string& publisherId)
    {
        return m_impl->publisher(topic, publisherId);
    }

    Subscriber& Master::subscriber(const std::string& topic,
        const std::string& subscriberId)
    {
        return m_impl->subscriber(topic, subscriberId);
    }
#endif

    std::string Master::getTopicUniqueId(const std::string& topic,
        const std::string& publisherOrSubscriberId, bool isSubscriber)
    {
        return m_impl->getTopicUniqueId(topic, publisherOrSubscriberId, isSubscriber);
    }

    std::shared_ptr<Master> master()
    {
        static std::shared_ptr<Master> m = std::make_shared<Master>();
        return m;
    }

}
}
