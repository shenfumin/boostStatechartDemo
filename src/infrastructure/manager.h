#pragma once

#include <functional>
#include <memory>
#include <mutex>
#include <string>
#include <unordered_map>
#include "BlockingQueue.h"
#include "msg.h"

namespace NewRT
{
namespace TKP
{

class Manager
{
public:
    bool subscribe(size_t id, Msg::Handler handler)
    {
        std::lock_guard<std::mutex> lg(m_msgHandlerMutex);
        if (m_threadStart)
        {
            throw std::runtime_error("threadStarted");
        }
        m_msgHandlers[id] = handler;
        return true;
    }

    template <typename T>
    bool subscribe(Msg::MsgId id, std::function<void(const T &)> cb)
    {
        auto eventHandler = [cb](const Msg::Ptr msg) {
            auto dataMsg = std::dynamic_pointer_cast<MsgWithData<T>>(msg);
            cb(dataMsg->data());
        };
        return subscribe(id, eventHandler);
    }

    void postMsg(const Msg::Ptr msg)
    {
        m_msgQueue.put(msg);
    }

    void postMsg(std::function<void()> func)
    {
        auto msg    = std::make_shared<MsgWithData<std::function<void()>>>();
        msg->id()   = static_cast<Msg::MsgId>(Msg::MsgFunctionCall);
        msg->data() = func;
        postMsg(msg);
    }

    template <typename T>
    void postMsg(Msg::MsgId id, const T &data)
    {
        auto msg = std::make_shared<MsgWithData<T>>(id, data);
        postMsg(msg);
    }

    void process_queue_msg()
    {
        subscribe(Msg::MsgFunctionCall, [this](Msg::Ptr msg) {
            auto cbMsg = std::dynamic_pointer_cast<MsgWithData<std::function<void()>>>(msg);
            cbMsg->data()();
        });
        {
            std::lock_guard<std::mutex> lg(m_msgHandlerMutex);
            m_threadStart = true;
        }
        for (;;)
        {
            auto msg = m_msgQueue.take();
            if (m_msgHandlers[msg->id()] != nullptr)
            {
                m_msgHandlers[msg->id()](msg);
            }
            if (msg->id() == Msg::MsgTerminate)
            {
                break;
            }
        }
        {
            std::lock_guard<std::mutex> lg(m_msgHandlerMutex);
            m_threadStart = false;
        }
    }

private:
    BlockingQueue<Msg::Ptr> m_msgQueue;
    std::mutex m_msgHandlerMutex;
    std::array<Msg::Handler, Msg::MsgLast> m_msgHandlers = {};
    bool m_threadStart                                   = false;
};
} // namespace TKP
} // namespace NewRT
