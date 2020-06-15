#pragma once

#include <map>
#include <mutex>
#include <functional>
#include <cassert>
#include <string>

#include "ddsmaster.h"
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

#endif


namespace NewRT
{
namespace DDS
{
namespace Sub
{

//template<typename T>
using ReaderListener = DDSDataReaderListener;

using DataReader = DDSDataReader;
//using InstanceHandle = dds::core::InstanceHandle;
using RequestedDeadlineMissedStatus = DDS_RequestedDeadlineMissedStatus;
using RequestedIncompatibleQosStatus = DDS_RequestedIncompatibleQosStatus;
using SampleRejectedStatus = DDS_SampleRejectedStatus;
using LivelinessChangedStatus = DDS_LivelinessChangedStatus;
using SampleLostStatus = DDS_SampleLostStatus;
using SubscriptionMatchedStatus = DDS_SubscriptionMatchedStatus;

//template<typename T>
using DataAvailableCB = std::function<void(DataReader*)>;
using RemoteCoordinaryDeadCB = std::function<void(bool)>;
template<typename T>
using DataCB = std::function<void(T&)>;
//template<typename T>
using RequestedDeadlineMissedCB = std::function<void(DataReader*, const RequestedDeadlineMissedStatus&)>;
//template<typename T>
using RequestedIncompatibleQosCB = std::function<void(DataReader*, const RequestedIncompatibleQosStatus&)>;
//template<typename T>
using SampleRejectedCB = std::function<void(DataReader*, const SampleRejectedStatus&)>;
//template<typename T>
using LivelinessChangedCB = std::function<void(DataReader*, const LivelinessChangedStatus&)>;
//template<typename T>
using SampleLostCB = std::function<void(DataReader*, const SampleLostStatus&)>;
//template<typename T>
using SubscriptionMatchedCB = std::function<void(DataReader*, const SubscriptionMatchedStatus&)>;

//template<typename T>
class CallbackListener : public DDSDataReaderListener
{
    using Reader = DDSDataReader;
    DataAvailableCB m_dataAvailable = nullptr;
    RemoteCoordinaryDeadCB m_remoteCoordinaryDead = nullptr;
    RequestedDeadlineMissedCB m_requestedDeadlineMissed = nullptr;
    RequestedIncompatibleQosCB m_requestedIncompatibleQos = nullptr;
    SampleRejectedCB m_sampleRejected = nullptr;
    LivelinessChangedCB m_livelinessChanged = nullptr;
    SampleLostCB m_sampleLost = nullptr;
    SubscriptionMatchedCB m_subscriptionMatched = nullptr;

    void* m_data;

private:
    void on_requested_deadline_missed(Reader* reader, const RequestedDeadlineMissedStatus& status) final
    {
        if (m_requestedDeadlineMissed)
        {
            m_requestedDeadlineMissed(reader, status);
        }
    }

    void on_requested_incompatible_qos(Reader* reader, const RequestedIncompatibleQosStatus& status) final
    {
        if (m_requestedIncompatibleQos)
        {
            m_requestedIncompatibleQos(reader, status);
        }
    }

    void on_sample_rejected(Reader* reader, const SampleRejectedStatus& status) final
    {
        if (m_sampleRejected)
        {
            m_sampleRejected(reader, status);
        }
    }

    void on_liveliness_changed(Reader* reader, const LivelinessChangedStatus& status) final
    {
        if (m_livelinessChanged)
        {
            m_livelinessChanged(reader, status);
        }
    }

    void on_sample_lost(Reader* reader, const SampleLostStatus& status) final
    {
        if (m_sampleLost)
        {
            m_sampleLost(reader, status);
        }
    }

    void on_subscription_matched(Reader* reader, const SubscriptionMatchedStatus& status) final
    {
        if (m_subscriptionMatched)
        {
            m_subscriptionMatched(reader, status);
        }
    }

    void on_data_available(Reader* reader)
    {
        if (m_dataAvailable)
        {
            m_dataAvailable(reader);
        }
    }

public:
    
    void dataAvailable(DataAvailableCB cb)
    {
        m_dataAvailable = cb;
    }
    
    void remoteCoordinaryDead(RemoteCoordinaryDeadCB cb)
    {
        m_remoteCoordinaryDead = cb;
    }
    
    template<typename T>
    void onData(DataCB<T> cb)
    {
        m_dataAvailable = [this,cb](Reader* reader)
        {
            typename T::DataReader* hwReader = T::DataReader::narrow(reader);
            struct DDS_SampleInfo sample_info;
            T *sample = NULL;
            DDS_ReturnCode_t retcode;

            sample = T::TypeSupport::create_data();
            if (sample == NULL)
            {
                printf("Failed sample initialize\n");
            }

            retcode = hwReader->take_next_sample(*sample, sample_info);
            while (retcode == DDS_RETCODE_OK)
            {
                if (sample_info.valid_data)
                {
                    if(sample_info.view_state == DDS_NEW_VIEW_STATE)
                    {
                        //a new participant instance in coming,save the instance_handle
                        struct DDS_ParticipantBuiltinTopicData *data =
                            (struct DDS_ParticipantBuiltinTopicData*)sample_info.reserved_data;
                        
                        std::cout<<"Sample received new view state"<<data->participant_name.name<<std::endl;
                    }
                    
                    cb(*sample);
                }
                else
                {
                    struct DDS_ParticipantBuiltinTopicData *data = (DDS_ParticipantBuiltinTopicData*)sample;
                    std::cout<<"not alive state,read_next_sample_untyped,retcode:"<<data->participant_name.name<<std::endl;
                    if(sample_info.instance_state != DDS_ALIVE_INSTANCE_STATE)
                    {
                        if (m_remoteCoordinaryDead)
                        {
                            m_remoteCoordinaryDead(false);
                        }
                    }
                    //std::cout<<"Sample received\n\tINVALID DATA"<<std::endl;
                }
                retcode = hwReader->take_next_sample(*sample, sample_info);
            }
            
        };
    }

    void requestedDeadlineMissed(RequestedDeadlineMissedCB cb)
    {
        m_requestedDeadlineMissed = cb;
    }

    void requestedIncompatibleQos(RequestedIncompatibleQosCB cb)
    {
        m_requestedIncompatibleQos = cb;
    }

    void sampleRejected(SampleRejectedCB cb)
    {
        m_sampleRejected = cb;
    }

    void livelinessChanged(LivelinessChangedCB cb)
    {
        m_livelinessChanged = cb;
    }

    void sampleLost(SampleLostCB cb)
    {
        m_sampleLost = cb;
    }

    void subscriptionMatched(SubscriptionMatchedCB cb)
    {
        m_subscriptionMatched = cb;
    }
};

//template<typename T>
struct SubscriberInternalData
{
    enum Stage
    {
        Initialized,
        ListenerConfig,
        Working
    };
    DDSTopic* topic = nullptr;
    DataReader* reader = nullptr;
    std::shared_ptr<ReaderListener> listener = nullptr;
    Stage stage = Initialized;
    std::shared_ptr<CallbackListener> cbListener()
    {
        return std::dynamic_pointer_cast<CallbackListener>(listener);
    }
};

template<typename T>
class Subscriber
{
    static std::map<std::string, std::shared_ptr<SubscriberInternalData>> m_data;
    std::string m_topicName;
    std::string m_subscriberId;
    std::shared_ptr<SubscriberInternalData> m_currData = nullptr;

public:
    Subscriber(const std::string& topicName,std::string subscriberId = std::string())
        : m_topicName(topicName)
        , m_subscriberId(subscriberId)
    {
        assert(!topicName.empty());

        auto id = master()->getTopicUniqueId(topicName, subscriberId, true);
        auto it = m_data.find(id);
        if (it == m_data.end())
        {
            // Create New SubscriberInternalData
            m_currData = std::make_shared<SubscriberInternalData>();
            if(topicName != DDS_PARTICIPANT_BUILTIN_TOPIC_NAME)
                m_currData->topic = master()->createTopic<T>(topicName, subscriberId, true);
            m_currData->stage = SubscriberInternalData::Initialized;
            m_data[id] = m_currData;
        }
        else
        {
            m_currData = it->second;
        }
    }

    DDSDomainParticipant* participant()
    {
        return master()->participant(m_topicName, m_subscriberId, true);
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
        if (m_currData->stage == SubscriberInternalData::Working)
        {
            throw ListenerAlreadyConfiguredException(m_topicName);
        }
        else if (m_currData->stage == SubscriberInternalData::Initialized)
        {
            m_currData->listener = std::make_shared<CallbackListener>();
            m_currData->stage = SubscriberInternalData::ListenerConfig;
        }
    }

    Subscriber& listener(std::shared_ptr<ReaderListener> l)
    {
        assertValid();

        if (m_currData->stage == SubscriberInternalData::Initialized)
        {
            m_currData->listener = l;
            m_currData->reader = master()->createReader(m_currData->topic, l, m_subscriberId);
            m_currData->stage = SubscriberInternalData::Working;
        }
        else
        {
            throw ListenerAlreadyConfiguredException(m_topicName);
        }
        return *this;
    }

    Subscriber& enterCallbackEdit()
    {
        assertInConfig();
        return *this;
    }

    Subscriber& leaveCallbackEdit()
    {
        assertInConfig();
        m_currData->reader = master()->createReader(m_currData->topic,
            m_currData->listener, m_subscriberId);
        m_currData->stage = SubscriberInternalData::Working;
        return *this;
    }


    
    Subscriber& onData(DataCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->onData<T>(cb);
        return *this;
    }
    
    Subscriber& setRemoteCoordinaryCB(RemoteCoordinaryDeadCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->remoteCoordinaryDead(cb);
        return *this;
    }

    Subscriber& requestedDeadlineMissed(RequestedDeadlineMissedCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->requestedDeadlineMissed(cb);
        return *this;
    }

    Subscriber& requestedIncompatibleQos(RequestedIncompatibleQosCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->requestedIncompatibleQos(cb);
        return *this;
    }

    Subscriber& sampleRejected(SampleRejectedCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->sampleRejected(cb);
        return *this;
    }

    Subscriber& livelinessChanged(LivelinessChangedCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->livelinessChanged(cb);
        return *this;
    }

    Subscriber& sampleLost(SampleLostCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->sampleLost(cb);
        return *this;
    }

    Subscriber& subscriptionMatched(SubscriptionMatchedCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->subscriptionMatched(cb);
        return *this;
    }
};


template<typename T>
class BuiltInSubscriber
{
    static std::map<std::string, std::shared_ptr<SubscriberInternalData>> m_data;
    std::string m_participantName;
    std::string m_subscriberId;
    std::shared_ptr<SubscriberInternalData> m_currData = nullptr;
    
    static std::map<std::string, DDS_InstanceHandle_t > s_participantHandles;
    static std::map<std::string, std::function<void(std::string,bool)>> s_cbLivenessFuctions;

public:
    BuiltInSubscriber(const std::string& participantName,std::string subscriberId = std::string())
        : m_participantName(participantName)
        , m_subscriberId(subscriberId)
    {
        assert(!participantName.empty());

        auto id = master()->getTopicUniqueId(participantName, subscriberId, true);
        auto it = m_data.find(id);
        if (it == m_data.end())
        {
            // Create New SubscriberInternalData
            m_currData = std::make_shared<SubscriberInternalData>();
            m_currData->stage = SubscriberInternalData::Initialized;
            m_data[id] = m_currData;
        }
        else
        {
            m_currData = it->second;
        }
    }

    DDSDomainParticipant* participant()
    {
        return master()->participant(m_participantName, m_subscriberId, true);
    }

    void destroy()
    {
        m_data.erase(m_participantName);
        m_currData = nullptr;
    }

    void assertValid()
    {
        if (m_currData == nullptr)
        {
            throw TopicDestroyedException(m_participantName);
        }
    }

    void assertInConfig()
    {
        assertValid();
        if (m_currData->stage == SubscriberInternalData::Working)
        {
            throw ListenerAlreadyConfiguredException(m_participantName);
        }
        else if (m_currData->stage == SubscriberInternalData::Initialized)
        {
            m_currData->listener = std::make_shared<CallbackListener>();
            m_currData->stage = SubscriberInternalData::ListenerConfig;
        }
    }

    BuiltInSubscriber& listener(std::shared_ptr<ReaderListener> l)
    {
        assertValid();

        if (m_currData->stage == SubscriberInternalData::Initialized)
        {
            m_currData->listener = l;
            m_currData->reader = master()->createBuiltinReader(m_participantName, l, m_subscriberId);
            m_currData->stage = SubscriberInternalData::Working;
        }
        else
        {
            throw ListenerAlreadyConfiguredException(m_participantName);
        }
        return *this;
    }
    
    BuiltInSubscriber& dataAvailable(DataAvailableCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->dataAvailable(cb);
        return *this;
    }
    
    BuiltInSubscriber& configReader()
    {
        assertValid();
        if(m_currData->listener == nullptr)
        {
            throw ListenerAlreadyConfiguredException(m_subscriberId);
        }
        m_currData->reader = master()->createBuiltinReader(m_participantName, m_currData->listener,m_subscriberId);
        
        //dataAvailable(onLivenessChanged);
        
        
        return *this;
    }
    

    BuiltInSubscriber& enterCallbackEdit()
    {
        assertInConfig();
        return *this;
    }

    BuiltInSubscriber& leaveCallbackEdit()
    {
        assertInConfig();
        m_currData->reader = master()->createBuiltinReader(m_participantName,
            m_currData->listener, m_subscriberId);
        m_currData->stage = SubscriberInternalData::Working;
        return *this;
    }


    
    BuiltInSubscriber& onData(DataCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->onData<T>(cb);
        return *this;
    }

    BuiltInSubscriber& requestedDeadlineMissed(RequestedDeadlineMissedCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->requestedDeadlineMissed(cb);
        return *this;
    }

    BuiltInSubscriber& requestedIncompatibleQos(RequestedIncompatibleQosCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->requestedIncompatibleQos(cb);
        return *this;
    }

    BuiltInSubscriber& sampleRejected(SampleRejectedCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->sampleRejected(cb);
        return *this;
    }

    BuiltInSubscriber& livelinessChanged(LivelinessChangedCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->livelinessChanged(cb);
        return *this;
    }

    BuiltInSubscriber& sampleLost(SampleLostCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->sampleLost(cb);
        return *this;
    }

    BuiltInSubscriber& subscriptionMatched(SubscriptionMatchedCB cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->subscriptionMatched(cb);
        return *this;
    }
};


template<typename T>
std::map<std::string, std::shared_ptr<SubscriberInternalData>> BuiltInSubscriber<T>::m_data;
template<typename T>
std::map<std::string, DDS_InstanceHandle_t> BuiltInSubscriber<T>::s_participantHandles;
template<typename T>
std::map<std::string, std::function<void(std::string,bool)>> BuiltInSubscriber<T>::s_cbLivenessFuctions;



template<typename T>
std::map<std::string, std::shared_ptr<SubscriberInternalData>> Subscriber<T>::m_data;

}
}
}
