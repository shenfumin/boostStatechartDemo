#pragma once

#include "ddsmanager.h"
#include "manager.h"
#include "msgManager.h"
namespace NewRT
{
namespace TKP
{

class MsgManager : public Manager
{
public:
    static MsgManager *getInstance()
    {
        static MsgManager instance;
        return &instance;
    }
    template <typename T>
    bool publishDDS(const std::string &topic, const T &data)
    {
        return NewRT::TCS::DDSManager::publish(topic, data);
    }

    template <typename T>
    bool subscribeDDS(const std::string &topic, const std::function<void(const T &)> cb)
    {
        auto ddsWrapper = [this, cb](const T &data) { postMsg([cb, data]() { cb(data); }); };
        return NewRT::TCS::DDSManager::subscrib<T>(topic, ddsWrapper);
    }

    void subscribeBuiltinLiveness(std::string participantName, const std::function<void(bool)> cb)
    {
        // auto livenessChanged = [participantName,cb,this](std::string
        // participant,bool state)
        // {
        //     if(participantName == participant)
        //     {
        //         postMsg([cb, state](){
        //             cb(state);
        //         });
        //     }
        // };

        // NewRT::DDS::Sub::BuiltInSubscriber<dds::topic::ParticipantBuiltinTopicData>(participantName)
        // .enterCallbackEdit()
        // .configReader()
        // .livelinessChanged(livenessChanged)
        // .leaveCallbackEdit();
    }

private:
    MsgManager(){

    };
    MsgManager(const MsgManager &){

    };
};

} // namespace TKP
} // namespace NewRT
