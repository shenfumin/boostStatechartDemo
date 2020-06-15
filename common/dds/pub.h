#pragma once

#include "ddsmaster.h"
#include <iostream>
#include <map>

namespace NewRT
{
namespace DDS
{
namespace Pub
{

template<typename T>
using WriterListener = dds::pub::NoOpDataWriterListener<T>;
template<typename T>
using DataWriter = dds::pub::DataWriter<T>;
using Duration = dds::core::Duration;

using OfferedDeadlineMissedStatus = dds::core::status::OfferedDeadlineMissedStatus;
using OfferedIncompatibleQosStatus = dds::core::status::OfferedIncompatibleQosStatus;
using LivelinessLostStatus = dds::core::status::LivelinessLostStatus;
using PublicationMatchedStatus = dds::core::status::PublicationMatchedStatus;
using ReliableWriterCacheChangedStatus = rti::core::status::ReliableWriterCacheChangedStatus;
using ReliableReaderActivityChangedStatus = rti::core::status::ReliableReaderActivityChangedStatus;
using InstanceHandle = dds::core::InstanceHandle;
using AcknowledgmentInfo = rti::pub::AcknowledgmentInfo;
using ServiceRequestAcceptedStatus = rti::core::status::ServiceRequestAcceptedStatus;

template<typename T>
using OfferedDeadlineMissedCB = std::function<void(DataWriter<T>&, const OfferedDeadlineMissedStatus&)>;
template<typename T>
using OfferedIncompatibleQosCB = std::function<void(DataWriter<T>&, const OfferedIncompatibleQosStatus&)>;
template<typename T>
using LivelinessLostCB = std::function<void(DataWriter<T>&, const LivelinessLostStatus&)>;
template<typename T>
using PublicationMatchedCB = std::function<void(DataWriter<T>&, const PublicationMatchedStatus&)>;
template<typename T>
using ReliableWriterCacheChangedCB = std::function<void(DataWriter<T>&, const ReliableWriterCacheChangedStatus&)>;
template<typename T>
using ReliableReaderActivityChangedCB = std::function<void(DataWriter<T>&, const ReliableReaderActivityChangedStatus&)>;
template<typename T>
using InstanceReplacedCB = std::function<void(DataWriter<T>&, const InstanceHandle&)>;
template<typename T>
using ApplicationAcknowledgmentCB = std::function<void(DataWriter<T>&, const AcknowledgmentInfo&)>;
template<typename T>
using ServiceRequestAcceptedCB = std::function<void(DataWriter<T>&, const ServiceRequestAcceptedStatus&)>;

template<typename T>
class CallbackListener : public WriterListener<T>
{
private:
    using Writer = DataWriter<T>;
    OfferedDeadlineMissedCB<T> m_offeredDeadlineMissed = nullptr;
    OfferedIncompatibleQosCB<T> m_offeredIncompatibleQos = nullptr;
    LivelinessLostCB<T> m_livelinessLost = nullptr;
    PublicationMatchedCB<T> m_publicationMatched = nullptr;
    ReliableWriterCacheChangedCB<T> m_reliableWriterCacheChanged = nullptr;
    ReliableReaderActivityChangedCB<T> m_reliableReaderActivityChanged = nullptr;
    InstanceReplacedCB<T> m_instanceReplaced = nullptr;
    ApplicationAcknowledgmentCB<T> m_applicationAcknowledgment = nullptr;
    ServiceRequestAcceptedCB<T> m_serviceRequestAccepted = nullptr;

    void on_offered_deadline_missed(Writer& writer, const OfferedDeadlineMissedStatus& status) final
    {
        if (m_offeredDeadlineMissed)
        {
            m_offeredDeadlineMissed(writer, status);
        }
    }

    void on_offered_incompatible_qos(Writer& writer, const OfferedIncompatibleQosStatus& status) final
    {
        if (m_offeredIncompatibleQos)
        {
            m_offeredIncompatibleQos(writer, status);
        }
    }

    void on_liveliness_lost(Writer& writer, const LivelinessLostStatus& status) final
    {
        if (m_livelinessLost)
        {
            m_livelinessLost(writer, status);
        }
    }

    void on_publication_matched(Writer& writer, const PublicationMatchedStatus& status) final
    {
        if (m_publicationMatched)
        {
            m_publicationMatched(writer, status);
        }
    }

    void on_reliable_writer_cache_changed(Writer& writer, const ReliableWriterCacheChangedStatus& status) final
    {
        if (m_reliableWriterCacheChanged)
        {
            m_reliableWriterCacheChanged(writer, status);
        }
    }

    void on_reliable_reader_activity_changed(Writer& writer, const ReliableReaderActivityChangedStatus& status) final
    {
        if (m_reliableReaderActivityChanged)
        {
            m_reliableReaderActivityChanged(writer, status);
        }
    }

    void on_instance_replaced(Writer& writer, const InstanceHandle& handle) final
    {
        if (m_instanceReplaced)
        {
            m_instanceReplaced(writer, handle);
        }
    }

    void on_application_acknowledgment(Writer& writer, const AcknowledgmentInfo& info) final
    {
        if (m_applicationAcknowledgment)
        {
            m_applicationAcknowledgment(writer, info);
        }
    }

    void on_service_request_accepted(Writer& writer, const ServiceRequestAcceptedStatus& status) final
    {
        if (m_serviceRequestAccepted)
        {
            m_serviceRequestAccepted(writer, status);
        }
    }

public:

    void offeredDeadlineMissed(OfferedDeadlineMissedCB<T> cb)
    {
        m_offeredDeadlineMissed = cb;
    }

    void offeredIncompatibleQos(OfferedIncompatibleQosCB<T> cb)
    {
        m_offeredIncompatibleQos = cb;
    }

    void livelinessLost(LivelinessLostCB<T> cb)
    {
        m_livelinessLost = cb;
    }

    void publicationMatched(PublicationMatchedCB<T> cb)
    {
        m_publicationMatched = cb;
    }

    void reliableWriterCacheChanged(ReliableWriterCacheChangedCB<T> cb)
    {
        m_reliableWriterCacheChanged = cb;
    }

    void reliableReaderActivityChanged(ReliableReaderActivityChangedCB<T> cb)
    {
        m_reliableReaderActivityChanged = cb;
    }

    void instanceReplaced(InstanceReplacedCB<T> cb)
    {
        m_instanceReplaced = cb;
    }

    void applicationAcknowledgment(ApplicationAcknowledgmentCB<T> cb)
    {
        m_applicationAcknowledgment = cb;
    }

    void serviceRequestAccepted(ServiceRequestAcceptedCB<T> cb)
    {
        m_serviceRequestAccepted = cb;
    }
};

template<typename T>
struct PublisherInternalData
{
    enum Stage
    {
        Initialized,
        ListenerConfig,
        Working
    };
    std::shared_ptr<Topic<T>> topic = nullptr;
    std::shared_ptr<DataWriter<T>> writer = nullptr;
    std::shared_ptr<WriterListener<T>> listener = nullptr;
    Stage stage = Initialized;

    std::shared_ptr<CallbackListener<T>> cbListener()
    {
        return std::dynamic_pointer_cast<CallbackListener<T>>(listener);
    }
};

template<typename T>
class Publisher
{
    static std::map<std::string, std::shared_ptr<PublisherInternalData<T>>> m_data;
    std::string m_topicName;
    std::string m_publisherId;
    std::shared_ptr<PublisherInternalData<T>> m_currData = nullptr;

    void waitDiscovery(const Duration& maxWait)
    {
        auto remain = maxWait;
        while(m_currData->writer->publication_matched_status().total_count() == 0
                                            && remain > Duration::zero())
        {
            rti::util::sleep(Duration::from_millisecs(100));
            remain = remain - Duration::from_millisecs(100);
        }
    }

public:
    Publisher(const std::string& topicName, std::string publisherId = std::string())
        : m_topicName(topicName)
        , m_publisherId(publisherId)
    {
        assert(!topicName.empty());

        auto id = master()->getTopicUniqueId(topicName, publisherId, false);
        auto it = m_data.find(id);
        if (it == m_data.end())
        {
            // Create new PublisherInternalData
            m_currData = std::make_shared<PublisherInternalData<T>>();
            m_currData->topic = master()->createTopic<T>(topicName, publisherId, false);
            m_currData->stage = PublisherInternalData<T>::Initialized;
            m_data[id] = m_currData;
        }
        else
        {
            m_currData = it->second;
        }
    }

    DomainParticipant& participant()
    {
        return master()->participant(m_topicName, m_publisherId, false);
    }

    void destroy()
    {
        m_data.erase(m_topicName);
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
        if (m_currData->stage == PublisherInternalData<T>::Working)
        {
            throw ListenerAlreadyConfiguredException(m_topicName);
        }
        else if (m_currData->stage == PublisherInternalData<T>::Initialized)
        {
            m_currData->listener = std::make_shared<CallbackListener<T>>();
            m_currData->stage = PublisherInternalData<T>::ListenerConfig;
        }
    }

    Publisher& write(const T& data)
    {
        assertValid();
        switch (m_currData->stage)
        {
        case PublisherInternalData<T>::Initialized:
            enterCallbackEdit();
            // Fall through to ListenerConfig
        case PublisherInternalData<T>::ListenerConfig:
            leaveCallbackEdit();
            // Fall through to Working
        case PublisherInternalData<T>::Working:
            if (m_currData->writer)
            {

                try{
                m_currData->writer->write(data);
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

    Publisher& listener(std::shared_ptr<WriterListener<T>> l)
    {
        assertValid();

        if (m_currData->stage == PublisherInternalData<T>::Initialized)
        {
            m_currData->listener = l;
            m_currData->writer = master()->createWriter<T>(m_currData->topic, l, m_publisherId);
            m_currData->stage = PublisherInternalData<T>::Working;
        }
        else
        {
            throw ListenerAlreadyConfiguredException();
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
        m_currData->writer = master()->createWriter<T>(m_currData->topic,
            m_currData->listener, m_publisherId);
        waitDiscovery(Duration::from_millisecs(1000));
        m_currData->stage = PublisherInternalData<T>::Working;
        return *this;
    }

    Publisher& offeredDeadlineMissed(OfferedDeadlineMissedCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->offeredDeadlineMissed(cb);
        return *this;
    }

    Publisher& offeredIncompatibleQos(OfferedIncompatibleQosCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->offeredIncompatibleQos(cb);
        return *this;
    }

    Publisher& livelinessLost(LivelinessLostCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->livelinessLost(cb);
        return *this;
    }

    Publisher& publicationMatched(PublicationMatchedCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->publicationMatched(cb);
        return *this;
    }

    Publisher& reliableWriterCacheChanged(ReliableWriterCacheChangedCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->reliableWriterCacheChanged(cb);
        return *this;
    }

    Publisher& reliableReaderActivityChanged(ReliableReaderActivityChangedCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->reliableReaderActivityChanged(cb);
        return *this;
    }

    Publisher& instanceReplaced(InstanceReplacedCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->instanceReplaced(cb);
        return *this;
    }

    Publisher& applicationAcknowledgment(ApplicationAcknowledgmentCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->applicationAcknowledgment(cb);
        return *this;
    }

    Publisher& serviceRequestAccepted(ServiceRequestAcceptedCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->serviceRequestAccepted(cb);
        return *this;
    }

};

#define Publisher(X,topicName) Publisher<X>(topicName) 

template<typename T>
std::map<std::string, std::shared_ptr<PublisherInternalData<T>>> Publisher<T>::m_data;

}
}
}
