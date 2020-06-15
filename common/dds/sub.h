#pragma once

#include <map>
#include <mutex>
#include <functional>
#include <cassert>
#include <string>

#include "ddsmaster.h"

namespace NewRT
{
namespace DDS
{
namespace Sub
{

template<typename T>
using ReaderListener = dds::sub::NoOpDataReaderListener<T>;
template<typename T>
using DataReader = dds::sub::DataReader<T>;
using InstanceHandle = dds::core::InstanceHandle;
using RequestedDeadlineMissedStatus = dds::core::status::RequestedDeadlineMissedStatus;
using RequestedIncompatibleQosStatus = dds::core::status::RequestedIncompatibleQosStatus;
using SampleRejectedStatus = dds::core::status::SampleRejectedStatus;
using LivelinessChangedStatus = dds::core::status::LivelinessChangedStatus;
using SampleLostStatus = dds::core::status::SampleLostStatus;
using SubscriptionMatchedStatus = dds::core::status::SubscriptionMatchedStatus;

template<typename T>
using DataAvailableCB = std::function<void(DataReader<T>&)>;
template<typename T>
using DataCB = std::function<void(const T&)>;
template<typename T>
using RequestedDeadlineMissedCB = std::function<void(DataReader<T>&, const RequestedDeadlineMissedStatus&)>;
template<typename T>
using RequestedIncompatibleQosCB = std::function<void(DataReader<T>&, const RequestedIncompatibleQosStatus&)>;
template<typename T>
using SampleRejectedCB = std::function<void(DataReader<T>&, const SampleRejectedStatus&)>;
template<typename T>
using LivelinessChangedCB = std::function<void(DataReader<T>&, const LivelinessChangedStatus&)>;
template<typename T>
using SampleLostCB = std::function<void(DataReader<T>&, const SampleLostStatus&)>;
template<typename T>
using SubscriptionMatchedCB = std::function<void(DataReader<T>&, const SubscriptionMatchedStatus&)>;

template<typename T>
class CallbackListener : public ReaderListener<T>
{
    using Reader = DataReader<T>;
    DataAvailableCB<T> m_dataAvailable = nullptr;
    RequestedDeadlineMissedCB<T> m_requestedDeadlineMissed = nullptr;
    RequestedIncompatibleQosCB<T> m_requestedIncompatibleQos = nullptr;
    SampleRejectedCB<T> m_sampleRejected = nullptr;
    LivelinessChangedCB<T> m_livelinessChanged = nullptr;
    SampleLostCB<T> m_sampleLost = nullptr;
    SubscriptionMatchedCB<T> m_subscriptionMatched = nullptr;

    T m_data;

private:
    void on_requested_deadline_missed(Reader& reader, const RequestedDeadlineMissedStatus& status) final
    {
        if (m_requestedDeadlineMissed)
        {
            m_requestedDeadlineMissed(reader, status);
        }
    }

    void on_requested_incompatible_qos(Reader& reader, const RequestedIncompatibleQosStatus& status) final
    {
        if (m_requestedIncompatibleQos)
        {
            m_requestedIncompatibleQos(reader, status);
        }
    }

    void on_sample_rejected(Reader& reader, const SampleRejectedStatus& status) final
    {
        if (m_sampleRejected)
        {
            m_sampleRejected(reader, status);
        }
    }

    void on_liveliness_changed(Reader& reader, const LivelinessChangedStatus& status) final
    {
        if (m_livelinessChanged)
        {
            m_livelinessChanged(reader, status);
        }
    }

    void on_sample_lost(Reader& reader, const SampleLostStatus& status) final
    {
        if (m_sampleLost)
        {
            m_sampleLost(reader, status);
        }
    }

    void on_subscription_matched(Reader& reader, const SubscriptionMatchedStatus& status) final
    {
        if (m_subscriptionMatched)
        {
            m_subscriptionMatched(reader, status);
        }
    }

    void on_data_available(Reader &reader)
    {
        if (m_dataAvailable)
        {
            m_dataAvailable(reader);
        }
    }

public:
    void dataAvailable(DataAvailableCB<T> cb)
    {
        m_dataAvailable = cb;
    }

    void onData(DataCB<T> cb)
    {
        m_dataAvailable = [this,cb](Reader &reader)
        {
            while(reader->take(m_data))
            {
                cb(m_data);
            }
        };
    }

    void requestedDeadlineMissed(RequestedDeadlineMissedCB<T> cb)
    {
        m_requestedDeadlineMissed = cb;
    }

    void requestedIncompatibleQos(RequestedIncompatibleQosCB<T> cb)
    {
        m_requestedIncompatibleQos = cb;
    }

    void sampleRejected(SampleRejectedCB<T> cb)
    {
        m_sampleRejected = cb;
    }

    void livelinessChanged(LivelinessChangedCB<T> cb)
    {
        m_livelinessChanged = cb;
    }

    void sampleLost(SampleLostCB<T> cb)
    {
        m_sampleLost = cb;
    }

    void subscriptionMatched(SubscriptionMatchedCB<T> cb)
    {
        m_subscriptionMatched = cb;
    }
};

template<typename T>
struct SubscriberInternalData
{
    enum Stage
    {
        Initialized,
        ListenerConfig,
        Working
    };
    std::shared_ptr<Topic<T>> topic = nullptr;
    std::shared_ptr<DataReader<T>> reader = nullptr;
    std::shared_ptr<ReaderListener<T>> listener = nullptr;
    Stage stage = Initialized;
    std::shared_ptr<CallbackListener<T>> cbListener()
    {
        return std::dynamic_pointer_cast<CallbackListener<T>>(listener);
    }
};

template<typename T>
class Subscriber
{
    static std::map<std::string, std::shared_ptr<SubscriberInternalData<T>>> m_data;
    std::string m_topicName;
    std::string m_subscriberId;
    std::shared_ptr<SubscriberInternalData<T>> m_currData = nullptr;

public:
    Subscriber(const std::string& topicName, std::string subscriberId = std::string())
        : m_topicName(topicName)
        , m_subscriberId(subscriberId)
    {
        assert(!topicName.empty());

        auto id = master()->getTopicUniqueId(topicName, subscriberId, true);
        auto it = m_data.find(id);
        if (it == m_data.end())
        {
            // Create New SubscriberInternalData
            m_currData = std::make_shared<SubscriberInternalData<T>>();
            m_currData->topic = master()->createTopic<T>(topicName, subscriberId, true);
            m_currData->stage = SubscriberInternalData<T>::Initialized;
            m_data[id] = m_currData;
        }
        else
        {
            m_currData = it->second;
        }
    }

    DomainParticipant& participant()
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
        if (m_currData->stage == SubscriberInternalData<T>::Working)
        {
            throw ListenerAlreadyConfiguredException(m_topicName);
        }
        else if (m_currData->stage == SubscriberInternalData<T>::Initialized)
        {
            m_currData->listener = std::make_shared<CallbackListener<T>>();
            m_currData->stage = SubscriberInternalData<T>::ListenerConfig;
        }
    }

    Subscriber<T>& listener(std::shared_ptr<ReaderListener<T>> l)
    {
        assertValid();

        if (m_currData->stage == SubscriberInternalData<T>::Initialized)
        {
            m_currData->listener = l;
            m_currData->reader = master()->createReader<T>(m_currData->topic, l, m_subscriberId);
            m_currData->stage = SubscriberInternalData<T>::Working;
        }
        else
        {
            throw ListenerAlreadyConfiguredException();
        }
        return *this;
    }

    Subscriber<T>& enterCallbackEdit()
    {
        assertInConfig();
        return *this;
    }

    Subscriber<T>& leaveCallbackEdit()
    {
        assertInConfig();
        m_currData->reader = master()->createReader<T>(m_currData->topic,
            m_currData->listener, m_subscriberId);
        m_currData->stage = SubscriberInternalData<T>::Working;
        return *this;
    }

    Subscriber<T>& dataAvailable(DataAvailableCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->dataAvailable(cb);
        return *this;
    }

    Subscriber<T>& onData(DataCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->onData(cb);
        return *this;
    }

    Subscriber<T>& requestedDeadlineMissed(RequestedDeadlineMissedCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->requestedDeadlineMissed(cb);
        return *this;
    }

    Subscriber<T>& requestedIncompatibleQos(RequestedIncompatibleQosCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->requestedIncompatibleQos(cb);
        return *this;
    }

    Subscriber<T>& sampleRejected(SampleRejectedCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->sampleRejected(cb);
        return *this;
    }

    Subscriber<T>& livelinessChanged(LivelinessChangedCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->livelinessChanged(cb);
        return *this;
    }

    Subscriber<T>& sampleLost(SampleLostCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->sampleLost(cb);
        return *this;
    }

    Subscriber<T>& subscriptionMatched(SubscriptionMatchedCB<T> cb)
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
    static std::map<std::string, std::shared_ptr<SubscriberInternalData<T>>> s_data;
    static std::map<std::string, InstanceHandle> s_participantHandles;
    static std::map<std::string, std::function<void(std::string,bool)>> s_cbLivenessFuctions;
    static std::vector<std::shared_ptr<rti::core::ListenerBinder<DataReader<T>>>> s_bindPtrs;
    static std::mutex s_mutex;
    std::string m_participantName;
    std::string m_subscriberId;
    std::shared_ptr<SubscriberInternalData<T>> m_currData = nullptr;
    

public:
    BuiltInSubscriber(const std::string& participantName, std::string subscriberId = std::string("subscriber_builtin"))
        : m_participantName(participantName)
        , m_subscriberId(subscriberId)
    {
        assert(!participantName.empty());
        s_mutex.lock();


        auto id = master()->getTopicUniqueId(participantName, m_subscriberId, true);
        auto it = s_data.find(id);
        if (it == s_data.end())
        {
            // Create New SubscriberInternalData
            m_currData = std::make_shared<SubscriberInternalData<T>>();
            m_currData->stage = SubscriberInternalData<T>::Initialized;
            s_data[id] = m_currData;
        }
        else
        {
            m_currData = it->second;
        }
        s_mutex.unlock();
    }
    
    
    static void onLivenessChanged(NewRT::DDS::Sub::DataReader<T>& reader)
    {
        s_mutex.lock();
        dds::sub::LoanedSamples<dds::topic::ParticipantBuiltinTopicData> samples = reader.select()
            .state(dds::sub::status::DataState::any())
            .take();
        const dds::sub::status::DataState leaveParticipant = dds::sub::status::DataState(dds::sub::status::SampleState::not_read(),
            dds::sub::status::ViewState::not_new_view(),
            dds::sub::status::InstanceState::not_alive_no_writers());
        const dds::sub::status::DataState newParticipant = dds::sub::status::DataState(dds::sub::status::SampleState::not_read(),
            dds::sub::status::ViewState::new_view(),
            dds::sub::status::InstanceState::alive());
        for (auto sample : samples)
        {
            if (!sample->info().valid())
            {
                if (sample->info().state() == leaveParticipant)
                {
                    for (auto item : s_participantHandles)
                    {
                        if (item.second == sample.info().instance_handle())
                        {
                            //std::cout << item.first + " is dead" << std::endl;
                            item.second = dds::core::InstanceHandle::nil();
                            

                            auto iterFunc = s_cbLivenessFuctions.find(item.first) ;
                            if(iterFunc != s_cbLivenessFuctions.end())
                            {
                                iterFunc->second(item.first,false);
                            }

                        }
                    }
                }
            }
            else
            {
                std::string partitionName = sample->data()->participant_name().name().get();
                if (sample->info().state() == newParticipant)
                {

                    //std::cout << partitionName << " is alive" << std::endl;
                    if (s_participantHandles.find(partitionName) == s_participantHandles.end())
                    {
                        s_participantHandles.emplace(partitionName, sample->info().instance_handle());
                        auto iterFunc = s_cbLivenessFuctions.find(partitionName) ;
                        if(iterFunc != s_cbLivenessFuctions.end())
                        {
                            iterFunc->second(partitionName,true);
                        }
                    }
                    else if(s_participantHandles.find(partitionName)->second != sample->info().instance_handle())
                    {
                        s_participantHandles.find(partitionName)->second = sample->info().instance_handle();
                    }
                }
            }
        }
        s_mutex.unlock();
    }
    

    DomainParticipant& participant()
    {
        return master()->participant(m_participantName, m_subscriberId, true);
    }

    void destroy()
    {
        s_data.erase(m_participantName);
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
        if (m_currData->stage == SubscriberInternalData<T>::Working)
        {
            throw ListenerAlreadyConfiguredException(m_participantName);
        }
        else if (m_currData->stage == SubscriberInternalData<T>::Initialized)
        {
            m_currData->listener = std::make_shared<CallbackListener<T>>();
            m_currData->stage = SubscriberInternalData<T>::ListenerConfig;
        }
    }

    BuiltInSubscriber<T>& listener(std::shared_ptr<ReaderListener<T>> l)
    {
        assertValid();

        return *this;
    }
    
    BuiltInSubscriber<T>& configReader()
    {
        assertValid();
        if(m_currData->listener == nullptr)
        {
            throw ListenerAlreadyConfiguredException(m_subscriberId);
        }
        m_currData->reader = master()->createBuiltinReader<T>(m_participantName, m_subscriberId);

        
        auto bindptr = std::shared_ptr<rti::core::ListenerBinder<dds::sub::DataReader<T>>>(new rti::core::ListenerBinder<dds::sub::DataReader<T>>(
            rti::core::bind_listener(*m_currData->reader,m_currData->listener.get(),dds::core::status::StatusMask::data_available())));
        s_bindPtrs.push_back(bindptr);
        
        dataAvailable(onLivenessChanged);
        
        
        return *this;
    }

    BuiltInSubscriber<T>& enterCallbackEdit()
    {
        assertInConfig();
        return *this;
    }

    BuiltInSubscriber<T>& leaveCallbackEdit()
    {
        assertInConfig();
        m_currData->stage = SubscriberInternalData<T>::Working;
        return *this;
    }

    BuiltInSubscriber<T>& dataAvailable(DataAvailableCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->dataAvailable(cb);
        return *this;
    }
    

    
    BuiltInSubscriber<T>& livelinessChanged(std::function<void(std::string,bool)> cb)
    {
        s_mutex.lock();
        assertInConfig();
        assert(cb);
        s_cbLivenessFuctions.emplace(m_participantName,cb);
        
        s_mutex.unlock();
        return *this;
    
    }
    

    BuiltInSubscriber<T>& onData(DataCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->onData(cb);
        return *this;
    }

    BuiltInSubscriber<T>& requestedDeadlineMissed(RequestedDeadlineMissedCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->requestedDeadlineMissed(cb);
        return *this;
    }

    BuiltInSubscriber<T>& requestedIncompatibleQos(RequestedIncompatibleQosCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->requestedIncompatibleQos(cb);
        return *this;
    }

    BuiltInSubscriber<T>& sampleRejected(SampleRejectedCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->sampleRejected(cb);
        return *this;
    }

    BuiltInSubscriber<T>& livelinessChanged(LivelinessChangedCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->livelinessChanged(cb);
        return *this;
    }

    BuiltInSubscriber<T>& sampleLost(SampleLostCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->sampleLost(cb);
        return *this;
    }

    BuiltInSubscriber<T>& subscriptionMatched(SubscriptionMatchedCB<T> cb)
    {
        assertInConfig();
        assert(cb);
        m_currData->cbListener()->subscriptionMatched(cb);
        return *this;
    }
    
};

template<typename T>
std::map<std::string, std::shared_ptr<SubscriberInternalData<T>>> BuiltInSubscriber<T>::s_data;
template<typename T>
std::map<std::string, InstanceHandle> BuiltInSubscriber<T>::s_participantHandles;
template<typename T>
std::map<std::string, std::function<void(std::string,bool)>> BuiltInSubscriber<T>::s_cbLivenessFuctions;
template<typename T>
std::vector<std::shared_ptr<rti::core::ListenerBinder<DataReader<T>>>> BuiltInSubscriber<T>::s_bindPtrs;
template<typename T>
std::mutex BuiltInSubscriber<T>::s_mutex;

template<typename T>
std::map<std::string, std::shared_ptr<SubscriberInternalData<T>>> Subscriber<T>::m_data;


#define Subscriber(X,topicName) Subscriber<X>(topicName) 
}
}
}
