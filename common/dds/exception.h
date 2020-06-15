#pragma once

#include <stdexcept>

namespace NewRT
{
namespace DDS
{

class Exception : public std::runtime_error
{
public:
    Exception(const std::string& topicName, const std::string& what)
        : std::runtime_error(topicName + " " + what)
    {}
};

class TopicDestroyedException : public Exception
{
public:
    TopicDestroyedException(const std::string& topicName)
        : Exception(topicName, "already destroyed")
    {}
};

class TopicAlreadyExistException : public Exception
{
public:
    TopicAlreadyExistException(const std::string& topicName)
        : Exception(topicName, "already exists")
    {}
};

class ListenerAlreadyConfiguredException : public Exception
{
public:
    ListenerAlreadyConfiguredException(const std::string& topicName)
        : Exception(topicName, "Callback or listener already configured")
    {}
};

class TopicWriterNotValidException : public Exception
{
public:
    TopicWriterNotValidException(const std::string& topicName)
        : Exception(topicName, "Topic writer not valid")
    {}
};

class CfgFileNotValidException : public Exception
{
public:
    CfgFileNotValidException()
        : Exception("", "Configuration file not valid")
    {}
};

}
}
