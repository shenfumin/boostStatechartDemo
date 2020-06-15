#pragma once

#include "ddsmaster.h"
#include <iostream>
#include <memory>
#include <map>
#include <mutex>
#include <functional>
#include <cassert>
#include <string>

#ifdef MICRO_DDS
#include "rti_me_cpp.hxx"
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
#endif

namespace NewRT
{
namespace DDS
{
namespace Pub
{

using OfferedDeadlineMissedStatus = DDS_OfferedDeadlineMissedStatus;
using OfferedIncompatibleQosStatus = DDS_OfferedIncompatibleQosStatus;
using LivelinessLostStatus = DDS_LivelinessLostStatus;
using PublicationMatchedStatus = DDS_PublicationMatchedStatus;
//using ReliableWriterCacheChangedStatus = DDS_ReliableWriterCacheChangedStatus;
using ReliableReaderActivityChangedStatus = DDS_ReliableReaderActivityChangedStatus;
using InstanceStatus = DDS_DataReaderInstanceReplacedStatus;
//using AcknowledgmentInfo = DDS_AcknowledgmentInfo;
//using ServiceRequestAcceptedStatus = DDS_ServiceRequestAcceptedStatus;

//template<typename T>
using OfferedDeadlineMissedCB = std::function<void(DDSDataWriter*, const OfferedDeadlineMissedStatus&)>;
//template<typename T>
using OfferedIncompatibleQosCB = std::function<void(DDSDataWriter*, const OfferedIncompatibleQosStatus&)>;
//template<typename T>
using LivelinessLostCB = std::function<void(DDSDataWriter*, const LivelinessLostStatus&)>;
//template<typename T>
using PublicationMatchedCB = std::function<void(DDSDataWriter*, const PublicationMatchedStatus&)>;
//template<typename T>
//using ReliableWriterCacheChangedCB = std::function<void(DDSDataWriter*, const ReliableWriterCacheChangedStatus&)>;
//template<typename T>
using ReliableReaderActivityChangedCB = std::function<void(DDSDataWriter*, const ReliableReaderActivityChangedStatus&)>;
//template<typename T>
using InstanceReplacedCB = std::function<void(DDSDataWriter*, const InstanceStatus&)>;
//template<typename T>
//using ApplicationAcknowledgmentCB = std::function<void(DDSDataWriter*, const AcknowledgmentInfo&)>;
//template<typename T>
//using ServiceRequestAcceptedCB = std::function<void(DDSDataWriter*, const ServiceRequestAcceptedStatus&)>;
using DataWriter = DDSDataWriter;

//template<typename T>
class CallbackListener : public DDSDataWriterListener
{
private:
    
    OfferedDeadlineMissedCB m_offeredDeadlineMissed = nullptr;
    OfferedIncompatibleQosCB m_offeredIncompatibleQos = nullptr;
    LivelinessLostCB m_livelinessLost = nullptr;
    PublicationMatchedCB m_publicationMatched = nullptr;
    //ReliableWriterCacheChangedCB m_reliableWriterCacheChanged = nullptr;
    ReliableReaderActivityChangedCB m_reliableReaderActivityChanged = nullptr;
    InstanceReplacedCB m_instanceReplaced = nullptr;
    //ApplicationAcknowledgmentCB m_applicationAcknowledgment = nullptr;
    //ServiceRequestAcceptedCB m_serviceRequestAccepted = nullptr;

    void on_offered_deadline_missed(DDSDataWriter* writer, const OfferedDeadlineMissedStatus& status) final
    {
        if (m_offeredDeadlineMissed)
        {
            m_offeredDeadlineMissed(writer, status);
        }
    }

    void on_offered_incompatible_qos(DDSDataWriter* writer, const OfferedIncompatibleQosStatus& status) final
    {
        if (m_offeredIncompatibleQos)
        {
            m_offeredIncompatibleQos(writer, status);
        }
    }

    void on_liveliness_lost(DDSDataWriter* writer, const LivelinessLostStatus& status) final
    {
        if (m_livelinessLost)
        {
            m_livelinessLost(writer, status);
        }
    }

    void on_publication_matched(DDSDataWriter* writer, const PublicationMatchedStatus& status) final
    {
        if (m_publicationMatched)
        {
            m_publicationMatched(writer, status);
        }
    }
    
    /*
    void on_reliable_writer_cache_changed(Writer* writer, const ReliableWriterCacheChangedStatus& status) final
    {
        if (m_reliableWriterCacheChanged)
        {
            m_reliableWriterCacheChanged(writer, status);
        }
    }
    */

    void on_reliable_reader_activity_changed(DDSDataWriter* writer, const ReliableReaderActivityChangedStatus& status) final
    {
        if (m_reliableReaderActivityChanged)
        {
            m_reliableReaderActivityChanged(writer, status);
        }
    }

    void on_instance_replaced(DDSDataWriter* writer, const InstanceStatus& handle)
    {
        if (m_instanceReplaced)
        {
            m_instanceReplaced(writer, handle);
        }
    }

    /*
    void on_application_acknowledgment(Writer* writer, const AcknowledgmentInfo& info) final
    {
        if (m_applicationAcknowledgment)
        {
            m_applicationAcknowledgment(writer, info);
        }
    }
    

    void on_service_request_accepted(Writer* writer, const ServiceRequestAcceptedStatus& status) final
    {
        if (m_serviceRequestAccepted)
        {
            m_serviceRequestAccepted(writer, status);
        }
    }
    */

public:

    void offeredDeadlineMissed(OfferedDeadlineMissedCB cb)
    {
        m_offeredDeadlineMissed = cb;
    }

    void offeredIncompatibleQos(OfferedIncompatibleQosCB cb)
    {
        m_offeredIncompatibleQos = cb;
    }

    void livelinessLost(LivelinessLostCB cb)
    {
        m_livelinessLost = cb;
    }

    void publicationMatched(PublicationMatchedCB cb)
    {
        m_publicationMatched = cb;
    }

    

    void reliableReaderActivityChanged(ReliableReaderActivityChangedCB cb)
    {
        m_reliableReaderActivityChanged = cb;
    }

    void instanceReplaced(InstanceReplacedCB cb)
    {
        m_instanceReplaced = cb;
    }

    /*
    void reliableWriterCacheChanged(ReliableWriterCacheChangedCB cb)
    {
        m_reliableWriterCacheChanged = cb;
    }
    
    void applicationAcknowledgment(ApplicationAcknowledgmentCB cb)
    {
        m_applicationAcknowledgment = cb;
    }

    void serviceRequestAccepted(ServiceRequestAcceptedCB cb)
    {
        m_serviceRequestAccepted = cb;
    }
    */
};

//template<typename T>
struct PublisherInternalData
{
    enum Stage
    {
        Initialized,
        ListenerConfig,
        Working
    };
    DDSTopic* m_pubTopic = nullptr;
    DDSDataWriter* m_pubWriter = nullptr;
    std::shared_ptr<DDSDataWriterListener> listener = nullptr;
    Stage stage = Initialized;

    std::shared_ptr<CallbackListener> cbListener()
    {
        return std::dynamic_pointer_cast<CallbackListener>(listener);
    }

    

};


static std::map<std::string, std::shared_ptr<PublisherInternalData>> s_publishData;
template<typename T>
class Publisher
{
//    static std::map<std::string, std::shared_ptr<PublisherInternalData>> s_data;
    
    std::string m_topicName;
    std::string m_publisherId;
    std::shared_ptr<PublisherInternalData> m_currData = nullptr;

    

    void waitDiscovery(const DDS_Long maxWait)
    {
        auto remain = maxWait;
        DDS_PublicationMatchedStatus matchedStatus;
        while(m_currData->m_pubWriter->get_publication_matched_status(matchedStatus)&& matchedStatus.total_count == 0
                                            && remain > 0)
        {
            //rti::util::sleep(DDS_Duration_t::from_millisecs(100));
            OSAPI_Thread_sleep(100);
            remain = remain - 100;
        }
    }

public:
    Publisher(const std::string& topicName,std::string publisherId = std::string())
        : m_topicName(topicName)
        , m_publisherId(publisherId)
    {
        assert(!topicName.empty());

        
        
        auto id = master()->getTopicUniqueId(topicName, publisherId, false);
        auto it = s_publishData.find(id);
        if (it == s_publishData.end())
        {
            // Create new PublisherInternalData
            m_currData = std::make_shared<PublisherInternalData>();
            m_currData->m_pubTopic = master()->createTopic<T>(topicName, publisherId, false);
            m_currData->stage = PublisherInternalData::Initialized;
            s_publishData[id] = m_currData;
        }
        else
        {
            m_currData = it->second;
        }
        
    }
    


    DDSDomainParticipant* participant()
    {
        return master()->participant(m_topicName, m_publisherId, false);
    }

    void destroy()
    {
        s_publishData.erase(m_topicName);
        m_currData = nullptr;
    }

    void assertValid()
    {
        if (m_currData == nullptr)
        {
            throw TopicDestroyedException(m_topicName);
        }
    }

    void assertInConfig()
    {
        assertValid();
        if (m_currData->stage == PublisherInternalData::Working)
        {
            throw ListenerAlreadyConfiguredException(m_topicName);
        }
        else if (m_currData->stage == PublisherInternalData::Initialized)
        {
            m_currData->listener = std::make_shared<CallbackListener>();
            m_currData->stage = PublisherInternalData::ListenerConfig;
        }
    }


    Publisher& write(T& data)
    {
        assertValid();

        typename T::DataWriter* writer = T::DataWriter::narrow(m_currData->m_pubWriter);
        T& targetData = data;
        switch (m_currData->stage)
        {
        case PublisherInternalData::Initialized:
            enterCallbackEdit();
            // Fall through to ListenerConfig
        case PublisherInternalData::ListenerConfig:
            leaveCallbackEdit();
            // Fall through to Working
        case PublisherInternalData::Working:
            if (writer)
            {

                try{
 //                   std::cout << "publisher write,data.msg:"<<targetData->msg<< std::endl;
                    
                    writer->register_instance(targetData);
                    DDS_ReturnCode_t retcode = writer->write(targetData,DDS_HANDLE_NIL);
                    if (retcode != DDS_RETCODE_OK)
                    {
                        std::cout<<"Failed to write to sample"<<std::endl;
                    }
                    writer->unregister_instance(targetData,DDS_HANDLE_NIL);

                }
                catch(const std::exception e)
                {
                    std::cout << e.what() << std::endl;
                }
            }
            else
            {
                throw TopicWriterNotValidException(m_topicName);
            }
        }

        
        return *this;
    }

    Publisher& listener(std::shared_ptr<DDSDataWriterListener> l)
    {
        assertValid();

        if (m_currData->stage == PublisherInternalData::Initialized)
        {
            m_currData->listener = l;
            m_currData->m_pubWriter = master()->createWriter(m_currData->m_pubTopic, l, m_publisherId);
            m_currData->stage = PublisherInternalData::Working;
        }
        else
        {
            throw ListenerAlreadyConfiguredException(m_topicName);
        }
        return *this;
    }

    Publisher& enterCallbackEdit()
    {
        assertInConfig();
        return *this;
    }

    Publisher& leaveCallbackEdit()
    {
        assertInConfig();
        m_currData->m_pubWriter = master()->createWriter(m_currData->m_pubTopic,
        m_currData->listener, m_publisherId);
        waitDiscovery(1000);
        m_currData->stage = PublisherInternalData::Working;
        return *this;
    }

    Publisher& offeredDeadlineMissed(OfferedDeadlineMissedCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->offeredDeadlineMissed(cb);
        return *this;
    }

    Publisher& offeredIncompatibleQos(OfferedIncompatibleQosCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->offeredIncompatibleQos(cb);
        return *this;
    }

    Publisher& livelinessLost(LivelinessLostCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->livelinessLost(cb);
        return *this;
    }

    Publisher& publicationMatched(PublicationMatchedCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->publicationMatched(cb);
        return *this;
    }

    /*
    Publisher& reliableWriterCacheChanged(ReliableWriterCacheChangedCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->reliableWriterCacheChanged(cb);
        return *this;
    }
    */

    Publisher& reliableReaderActivityChanged(ReliableReaderActivityChangedCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->reliableReaderActivityChanged(cb);
        return *this;
    }

    Publisher& instanceReplaced(InstanceReplacedCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->instanceReplaced(cb);
        return *this;
    }

    
    ~Publisher()
    {
    }

};

//#define Publisher(X,topicName) Publisher<X,X##DataWriter, X##TypePlugin_get>(topicName)
//template<typename T>
//std::map<std::string, std::shared_ptr<PublisherInternalData>> Publisher::s_publishData;

}
}
}

