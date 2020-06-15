#include "pub_micro.h"
#include "sub_micro.h"
#include "Foo.h"
#include <iostream>
#include <thread>

using namespace NewRT;

class RoomClient
{
    DDS::Pub::Publisher<Foo> m_pub;
    DDS::Sub::Subscriber<Foo> m_sub;
    int m_roomNumber;
    bool m_quitThread = false;
    std::thread m_thread;
public:
    RoomClient(int roomNumber)
        : m_pub("RoomTopicFromRoom", "publisher_room_" + std::to_string(roomNumber))
        , m_sub("RoomTopicToRoom", "subscriber_room_" + std::to_string(roomNumber))
        , m_roomNumber(roomNumber)
        , m_thread(std::bind(&RoomClient::serve, this))
    {
        m_sub.enterCallbackEdit()
            .onData(std::bind(&RoomClient::onData, this, std::placeholders::_1))
            .leaveCallbackEdit();
    }
    
    ~RoomClient()
    {
        m_quitThread = true;
        m_thread.join();
    }

    void onData(const Foo& data)
    {
        std::cout << "Room " << m_roomNumber << " Receive message from Center: "
            << data << std::endl;
    }

    void serve()
    {
        while(!m_quitThread)
        {
            Foo foo(rand(), rand());
            m_pub.write(foo);
            std::cout << "Room " << m_roomNumber << " Send Message to Center: "
                << foo << std::endl;
            sleep(1);
        }
    }
};

int main(int argc, char **argv)
{
    DDS::master()->init("../data/testdata/ddsmanager/conf.xml",
        "../data/testdata/ddsmanager/qos_profiles.xml");

    if (argc != 2)
    {
        std::cout << "Argument error" << std::endl;
    }

    auto roomNumber = std::atoi(argv[1]);
    auto roomClient = std::make_shared<RoomClient>(roomNumber);

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
