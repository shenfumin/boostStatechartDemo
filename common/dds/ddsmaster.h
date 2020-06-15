#pragma once

#include "ddsmanagerImpl.h"

#include "exception.h"

#include <string>
#include <memory>


#ifdef MICRO_DDS
#include "dds_cpp/dds_cpp_data.hxx"

namespace NewRT
{
namespace DDS
{
class Master
{
    std::shared_ptr<Micro_provider> getQosProvider(const std::string& topic,
            const std::string& publisherOrSubscriberId, bool sub);
    DDSPublisher*   createPublisher(const std::string& topic,
        const std::string& publisherId);
    DDSSubscriber*  createSubscriber(const std::string& topic,
        const std::string& subscriberId);
    
    

public:
    Master();
    bool init(const std::string& cfgXmlFile, const std::string& qosXmlFile);
    DDSDomainParticipant* participant(const std::string& topic,
        const std::string& publisherOrSubscriberId, bool isSubscriber);

    template<typename T>
    DDSTopic* createTopic(const std::string& topicName,
        const std::string& publisherOrSubscriberId, bool isSubscriber)
    {
        DDSDomainParticipant* pt = participant(topicName,publisherOrSubscriberId,isSubscriber);
        auto typeName = T::TypeSupport::get_type_name();
        T::TypeSupport::register_type(pt, typeName);
        

        //Getting and setting the topic QoS is not supported. DDS_TOPIC_QOS_DEFAULT is the only value supported as an argument to DDS_DomainParticipant_create_topic 
        DDSTopic* topic = pt->create_topic(topicName.c_str(),typeName,DDS_TOPIC_QOS_DEFAULT,NULL,DDS_STATUS_MASK_NONE);
        return topic;
    }


    std::string getTopicUniqueId(const std::string& topic,
        const std::string& publisherOrSubscriberId, bool isSubscriber);


 //   template<typename T>
    DDSDataReader* createReader(
        DDSTopic* topic,
        std::shared_ptr<DDSDataReaderListener> listener,
        const std::string& subscriberId)
    {
        
        auto topicName = topic->get_name();

        std::shared_ptr<DDS_DataReaderQos> readerQos = getQosProvider(topicName, subscriberId, true)->dataReaderQos;
        
        //readerQos->reliability.kind = DDS_BEST_EFFORT_RELIABILITY_QOS;
        auto subscriber = createSubscriber(topicName, subscriberId);
        
        DDS_StatusMask mask = DDS_DATA_AVAILABLE_STATUS;
        DDSDataReader* reader = subscriber->create_datareader(
                    topic,
                    *readerQos,
                    listener.get(),
                    mask);
        if(subscriber->get_participant()->enable() != DDS_RETCODE_OK)
        {
            std::cout<<"Participant enable failed!!!!!!"<<std::endl;
        }
        return reader;
    }
    
    DDSDataReader* createBuiltinReader(
        std::string& participantName,
        std::shared_ptr<DDSDataReaderListener> listener,
        const std::string& subscriberId)
    {
        DDSTopic* builtinTopic;
        DDS_TopicQos topicQos = DDS_TOPIC_QOS_DEFAULT;
        DDS_DataReaderQos readerQos = DDS_DATAREADER_QOS_DEFAULT;
        DDS_DomainParticipantQos participantQos = DDS_PARTICIPANT_QOS_DEFAULT;

        auto subscriber = createSubscriber("subscriber_builtin", subscriberId);
        subscriber->set_qos(DDS_SUBSCRIBER_QOS_DEFAULT);

        DDSDomainParticipant* pt = subscriber->get_participant();
        
        

        readerQos.protocol.rtps_object_id = RTPS_OBJECT_ID_READER_SDP_PARTICIPANT;
        readerQos.management.is_hidden = true;

        //pt->register_type(participantName,participantQos.discovery.discovery.property)

        //builtinTopic = pt->find_topic(DDS_PARTICIPANT_BUILTIN_TOPIC_NAME,d);//DDS_PARTICIPANT_BUILTIN_TOPIC_TYPE_NAME
        //Getting and setting the topic QoS is not supported. DDS_TOPIC_QOS_DEFAULT is the only value supported as an argument to DDS_DomainParticipant_create_topic 
    
        //builtinTopic = pt->create_topic(DDS_PARTICIPANT_TOPIC_NAME,DDS_PARTICIPANT_BUILTIN_TOPIC_TYPE_NAME,topicQos,NULL,DDS_STATUS_MASK_NONE);
        DDS_Duration_t d;
        d.sec = 3;
        d.nanosec = 3;
        builtinTopic = pt->find_topic(DDS_PARTICIPANT_TOPIC_NAME,d);
        //builtinTopic->set_listener(listener.get(),DDS_DATA_AVAILABLE_STATUS);
        DDSDataReader* reader = subscriber->lookup_datareader(DDS_PARTICIPANT_TOPIC_NAME);
    
        reader = subscriber->create_datareader(
                    builtinTopic,
                    readerQos,
                    listener.get(),
                    DDS_DATA_AVAILABLE_STATUS);
        
        reader = subscriber->lookup_datareader(DDS_PARTICIPANT_TOPIC_NAME);
        
        return reader;
    }

  //  template<typename T>
    DDSDataWriter* createWriter(
        DDSTopic* topic,
        std::shared_ptr<DDSDataWriterListener> listener,
        const std::string& publisherId)
    {
        auto topicName = topic->get_name();
        
        std::shared_ptr<DDS_DataWriterQos> writerQos = getQosProvider(topicName, publisherId, false)->dataWriterQos;
        auto publisher = createPublisher(topicName,publisherId);
        
        //for test
        //DDS_DataWriterQos pQos = DDS_DATAWRITER_QOS_DEFAULT;
        //pQos.liveliness.kind = DDS_MANUAL_BY_TOPIC_LIVELINESS_QOS;
        //pQos.liveliness.lease_duration.sec = 3;
        //pQos.liveliness.lease_duration.nanosec = 3;
        //pQos.reliability.kind = DDS_RELIABLE_RELIABILITY_QOS;
        //pQos.durability.kind = DDS_VOLATILE_DURABILITY_QOS;
        //pQos.ownership.kind = DDS_SHARED_OWNERSHIP_QOS;
        //pQos.protocol.rtps_reliable_writer.heartbeats_per_max_samples = 0;
        
        //pQos.management.is_anonymous = DDS_BOOLEAN_TRUE;
        //pQos.management.is_hidden = DDS_BOOLEAN_TRUE;
        DDS_StatusMask mask = DDS_PUBLICATION_MATCHED_STATUS;
        DDSDataWriter *datawriter = publisher->create_datawriter(topic,*writerQos,listener.get(),mask);
        if(publisher->get_participant()->enable() != DDS_RETCODE_OK)
        {
            std::cout<<"Participant enable failed!!!!!!"<<std::endl;
        }

        return datawriter;
    }
    

private:
    std::unique_ptr<DDSManagerImpl> m_impl;
};

std::shared_ptr<Master> master();

}
}


#else
using QosProvider       = dds::core::QosProvider;
using DomainParticipant = dds::domain::DomainParticipant;
using Publisher         = dds::pub::Publisher;
using Subscriber        = dds::sub::Subscriber;
template<typename T>
using Topic             = dds::topic::Topic<T>;
template<typename T>
using DataReader        = dds::sub::DataReader<T>;
template<typename T>
using DataWriter        = dds::pub::DataWriter<T>;
template<typename T>
using DataReaderListener = dds::sub::DataReaderListener<T>;
template<typename T>
using DataWriterListener = dds::pub::DataWriterListener<T>;



namespace NewRT
{
namespace DDS
{
    

class Master
{
    QosProvider& qosProvider(const std::string& topic,
        const std::string& publisherOrSubscriberId, bool isSubscriber);
    Publisher& publisher(const std::string& topic,
        const std::string& publisherId);
    Subscriber& subscriber(const std::string& topic,
        const std::string& subscriberId);
    const std::string strBuiltinTopicName = dds::topic::participant_topic_name();
    Subscriber (*BuiltinSubscriber)(const dds::domain::DomainParticipant & ) = dds::sub::builtin_subscriber;

public:
    Master();
    bool init(const std::string& cfgXmlFile, const std::string& qosXmlFile);
    DomainParticipant& participant(const std::string& topic,
        const std::string& publisherOrSubscriberId, bool isSubscriber);

    template<typename T>
    std::shared_ptr<Topic<T>> createTopic(const std::string& topic,
        const std::string& publisherOrSubscriberId, bool isSubscriber)
    {
        return std::make_shared<Topic<T>>(participant(topic, publisherOrSubscriberId, isSubscriber),
            topic, qosProvider(topic, publisherOrSubscriberId, isSubscriber).topic_qos());
    }

    std::string getTopicUniqueId(const std::string& topic,
        const std::string& publisherOrSubscriberId, bool isSubscriber);

    template<typename T>
    std::shared_ptr<DataReader<T>> createReader(
        std::shared_ptr<Topic<T>> topic,
        std::shared_ptr<DataReaderListener<T>> listener,
        const std::string& subscriberId)
    {
        auto topicName = topic->name();
        return std::make_shared<DataReader<T>>(
            subscriber(topicName, subscriberId),
            *topic,
            qosProvider(topicName, subscriberId, true).datareader_qos(),
            listener.get()
        );
    }

    template<typename T>
    std::shared_ptr<DataWriter<T>> createWriter(
        std::shared_ptr<Topic<T>> topic,
        std::shared_ptr<DataWriterListener<T>> listener,
        const std::string& publisherId)
    {
        auto topicName = topic->name();
        return std::make_shared<DataWriter<T>>(
            publisher(topicName, publisherId),
            *topic,
            qosProvider(topicName, publisherId, false).datawriter_qos(),
            listener.get()
        );
    }
    
    
    template<typename T>
    std::shared_ptr<DataReader<T>> createBuiltinReader(
        const std::string& topicName,const std::string& subscriberId)
    {
        dds::sub::Subscriber builtin_subscriber = subscriber(topicName, subscriberId);
        std::vector<dds::sub::DataReader<T>> participant_reader;
        dds::sub::find <dds::sub::DataReader<T>> (
		builtin_subscriber,
		dds::topic::participant_topic_name(),
		std::back_inserter(participant_reader));
        
        
        return std::make_shared<dds::sub::DataReader<T>>(participant_reader[0]);
        
    }

private:
    std::unique_ptr<NewRT::DDS::DDSManagerImpl> m_impl;
};

std::shared_ptr<Master> master();

}
}

#endif
