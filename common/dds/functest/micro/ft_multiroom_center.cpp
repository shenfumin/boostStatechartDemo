#include "pub_micro.h"
#include "sub_micro.h"
#include "Foo.h"
#include <iostream>
#include <thread>

using namespace NewRT;

class RoomService
{
    DDS::Pub::Publisher<Foo> m_pub;
    DDS::Sub::Subscriber<Foo> m_sub;
    int m_roomNumber;
    bool m_quitThread = false;
    std::thread m_thread;
public:
    RoomService(int roomNumber)
        : m_pub("RoomTopicToRoom", "publisher_room_" + std::to_string(roomNumber))
        , m_sub("RoomTopicFromRoom", "subscriber_room_" + std::to_string(roomNumber))
        , m_roomNumber(roomNumber)
        , m_thread(std::bind(&RoomService::serve, this))
    {
        m_sub.enterCallbackEdit()
            .onData(std::bind(&RoomService::onData, this, std::placeholders::_1))
            .leaveCallbackEdit();
    }
    
    ~RoomService()
    {
        m_quitThread = true;
        m_thread.join();
    }

    void onData(const Foo& data)
    {
        std::cout << "Receive message from Room " << m_roomNumber << ": "
            << data << std::endl;
    }

    void serve()
    {
        while(!m_quitThread)
        {
            Foo foo(rand(), rand());
            m_pub.write(foo);
            std::cout <<"Send message to Room " << m_roomNumber << ": "
                << foo << std::endl;
            sleep(1);
        }
    }
};

int main(int, char *[])
{
    DDS::master()->init("../data/testdata/ddsmanager/conf.xml",
        "../data/testdata/ddsmanager/qos_profiles.xml");

    std::map<int, std::shared_ptr<RoomService>> roomSerivces;
    for (int i = 1; i <= 2; i++)
    {
        roomSerivces[i] = std::make_shared<RoomService>(i);
    }

    while (true)
    {
        auto c = getchar();
        if (c == 'q' || c == 'Q')
        {
            break;
        }
    }

    return 0;
}
