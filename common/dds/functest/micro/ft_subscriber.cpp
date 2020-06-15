#include "Foo.h"
#include "FooPlugin.h"
#include "FooSupport.h"

#include "Hello.h"
#include "HelloPlugin.h"
#include "HelloSupport.h"

#include "ddsmanager.h"
#include "ddsmaster.h"

#include <thread>

using namespace NewRT::TCS;

void dataFunc(HelloWorld& data)
{
    std::cout << " callback func,received msg: "<<data.msg << std::endl;
}

void dataFuncF(Foo& data)
{
    std::cout << " callback func,received msg: " << std::endl;
}

void builtinFunc(DDS_ParticipantBuiltinTopicData& data)
{
    //HelloWorld* a = (HelloWorld*)data;
    std::cout << " callback func,received msg: " << std::endl;
    //HelloWorld* h = (HelloWorld*)data;
    //std::cout << " dataFunc() msg: "<<h->msg<< std::endl;
}


void livenessFunc(bool isLive)
{
//    DDS_SUBSCRIPTION_BUILTIN_TOPIC_TYPE_NAME
    std::cout << "livenessFunc callback func,isLive:"<<isLive<<std::endl;

}



const std::string topicName("HelloWorld");
int main(int, char *[])
{
    NewRT::DDS::master()->init("ftest-conf.xml",
        "ftest-qos_profiles.xml");

    auto livelinessChangedHandler = [](NewRT::DDS::Sub::DataReader*,
        const NewRT::DDS::Sub::LivelinessChangedStatus&)
    {
        std::cout << " " << topicName << " " << std::this_thread::get_id() << " liveliness changed" << std::endl;
    };

    
    //two interface can be use,such as below
    DDSManager::subscrib<HelloWorld>(topicName,dataFunc);
    DDSManager::subscrib<Foo>("HelloWorld2",dataFuncF);
    //NewRT::DDS::Sub::Subscriber<HelloWorld>(topicName).enterCallbackEdit().onData(dataFunc).setRemoteCoordinaryCB(livenessFunc).leaveCallbackEdit();
    

    //builtin test
    std::string participantName = "fooParticipant1";
    auto livenessChanged = [participantName](std::string participant,bool state)
    {
        std::cout<<"[liubangguo]livelinessChanged,[participant]:"<<participant<<",[state]:"<<state<<std::endl;
        if(participantName == participant)
        {
        /*    auto msg = std::make_shared<DDSMsg>(Msg::MsgDDSMsg,
                                [cb,state]()
                                {
                                    cb(state);
                                }
                            );
                            this->postMsgToMyQueue(msg);
                            */
        }
    };
        
    //DDSManager::subscrib<DDS_ParticipantBuiltinTopicData>(DDS_PARTICIPANT_BUILTIN_TOPIC_NAME,builtinFunc).enterCallbackEdit().dataAvailable(livenessFunc).leaveCallbackEdit();
    //NewRT::DDS::Sub::BuiltInSubscriber<DDS_ParticipantBuiltinTopicData>(participantName).enterCallbackEdit().dataAvailable(livenessFunc).leaveCallbackEdit();
    
    {
        int sleep_loop_count =  (24 * 60 * 60) / 2000;
        int sleep_loop_left = (24 * 60 * 60) % 2000;

        printf("Running for 24 hours, press Ctrl-C to exit\n");

        while (sleep_loop_count)
        {
            OSAPI_Thread_sleep(2000  * 1000); /* sleep is in ms */
            --sleep_loop_count;
        }

        OSAPI_Thread_sleep(sleep_loop_left * 1000);
    }

    //dds::core::cond::WaitSet waitSet;
    //waitSet.dispatch(dds::core::Duration(20));
    return 0;
}
