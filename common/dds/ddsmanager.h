#pragma once

#ifdef MICRO_DDS
#include "pub_micro.h"
#include "sub_micro.h"



namespace NewRT {
namespace TCS {

//#define Subscrib(X,topicName,func) subscrib<X,X##DataReader, X##TypePlugin_get>(topicName,func)
//#define Publish(T,topicName,data) publish<T,T##DataWriter, T##TypePlugin_get>(topicName,data)
    

class DDSManager
{
public:

    
    template<typename T>
    static bool subscrib(const std::string& topicName,
        std::function<void(T&)> func)
    {
        
        try {
            DDS::Sub::Subscriber<T>(topicName).enterCallbackEdit().onData(func).leaveCallbackEdit();
        }
        catch (const DDS::Exception&)
        {
            return false;
        }
        
        return true;
    }
    

    template<typename D>
    static bool publish(const std::string & topicName, D& data)
    {
        try {
            DDS::Pub::Publisher<D>(topicName).write(data);
        }
        catch(const DDS::Exception&)
        {
            return false;
        }
        return true;
    }
};

}
}



#else
#include "pub.h"
#include "sub.h"


namespace NewRT {
namespace TCS {

#define Subscrib(X,topicName,func) subscrib<X>(topicName,func)
#define Publish(X,topicName,data) publish<X>(topicName,data)
    
class DDSManager
{
public:

    template<typename T>
    static bool subscrib(const std::string& topicName,
        std::function<void(const T&)> func)
    {
        try {
            DDS::Sub::Subscriber<T>(topicName).enterCallbackEdit().onData(func).leaveCallbackEdit();
        }
        catch (const DDS::Exception&)
        {
            return false;
        }
        return true;
    }

    template<typename T>
    static bool publish(const std::string & topicName, const T &data)
    {
        try {
            DDS::Pub::Publisher<T>(topicName).write(data);
        }
        catch(const DDS::Exception&)
        {
            return false;
        }
        return true;
    }
};

}
}

#endif
