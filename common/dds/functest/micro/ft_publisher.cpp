#include <ddsmanager.h>
#include "Foo.h"
#include "FooSupport.h"
#include "Hello.h"
#include "HelloPlugin.h"
#include "HelloSupport.h"

using namespace NewRT::TCS;
using namespace NewRT::DDS::Pub;

struct CrashData
{
    int index;
};


class CrashTest
{
public:
    std::shared_ptr<CrashData> m_data;
    static std::map<std::string, std::shared_ptr<CrashData>> s_data;
};
std::map<std::string, std::shared_ptr<CrashData>> CrashTest::s_data;


int main(int, char *[])
{
    NewRT::DDS::master()->init("ftest-conf.xml",
        "ftest-qos_profiles.xml");


    std::string topicName = "HelloWorld";
//    CrashTest test;
//    test.m_data = std::make_shared<CrashData>();
//    CrashTest::s_data["id"] = test.m_data;
    
    NewRT::DDS::Pub::Publisher<HelloWorld>(topicName)
        .enterCallbackEdit()
        .livelinessLost([](NewRT::DDS::Pub::DataWriter*, const NewRT::DDS::Pub::LivelinessLostStatus&){
            std::cout << "livelinessLost callback" << std::endl;
        })
        .publicationMatched([](NewRT::DDS::Pub::DataWriter*, const NewRT::DDS::Pub::PublicationMatchedStatus&){
            std::cout << "publication matched callback" << std::endl;
        })
 //       .reliableReaderActivityChanged([](NewRT::DDS::Pub::DataWriter*, const NewRT::DDS::Pub::ReliableReaderActivityChangedStatus&){
 //           std::cout << "reliable reader activity changed callback" << std::endl;
 //       })
        .leaveCallbackEdit();
        


    try{

        int16_t i(0);
        HelloWorld* a = HelloWorldTypeSupport::create_data();
        //std::shared_ptr<NewRT::DDS::Pub::Publisher> publisher = std::make_shared<NewRT::DDS::Pub::Publisher>();
        while(i++ < 100)
        {
 //           a->x = rand();
  //          a->y = rand();
            sprintf(a->msg,"Micro DDS NewRT %d",i);
            
            std::cout << "[NewRT]write MSG:" << a->msg<<  std::endl;
            
            //two interface can be use,such as below
            if (i % 2 )
            {
                NewRT::DDS::Pub::Publisher<HelloWorld>(topicName).write(*a);
            }
            else
            {
                DDSManager::publish<HelloWorld>(topicName,*a);
            }
            OSAPI_Thread_sleep(1000);
        }
    }catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
