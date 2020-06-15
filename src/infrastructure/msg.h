#pragma once

#include <functional>
#include <memory>

namespace NewRT
{
namespace TKP
{

class Msg
{
public:
    using Ptr      = std::shared_ptr<Msg>;
    using Handler  = std::function<void(const Ptr)>;
    virtual ~Msg() = default;
    Msg()          = default;
    using MsgId    = enum { MsgTerminate, MsgKeyEvent, MsgDDS, MsgFunctionCall, MsgLast };
    Msg(MsgId id) : m_id(id)
    {
    }
    MsgId &id()
    {
        return m_id;
    }
    MsgId id() const
    {
        return m_id;
    }

private:
    MsgId m_id;
};

template <typename T>
class MsgWithData : public Msg
{
public:
    MsgWithData() = default;

    MsgWithData(MsgId id, const T &data) : Msg(id), m_data(data)
    {
    }

    T &data()
    {
        return m_data;
    }
    const T &data() const
    {
        return m_data;
    }

private:
    T m_data;
};

} // namespace TKP
} // namespace NewRT
