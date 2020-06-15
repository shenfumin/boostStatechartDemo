#pragma once

#include <boost/statechart/event.hpp>
namespace sc = boost::statechart;

namespace NewRT
{
namespace TKP
{

struct EvtFunctionEnable : sc::event<EvtFunctionEnable>
{
};
struct EvtFunctionDisable : sc::event<EvtFunctionDisable>
{
};
struct EvtKeyPress : sc::event<EvtKeyPress>
{
public:
    EvtKeyPress(int id) : m_functionId(id)
    {
    }
    int getFunctionId() const
    {
        return m_functionId;
    }

private:
    int m_functionId;
};

struct EvtKeyRelease : sc::event<EvtKeyRelease>
{
public:
    EvtKeyRelease(int id) : m_functionId(id)
    {
    }
    int getFunctionId() const
    {
        return m_functionId;
    }

private:
    int m_functionId;
};
struct EvtMoving : sc::event<EvtMoving>
{
};
struct EvtMotionStoped : sc::event<EvtMotionStoped>
{
};
struct EvtReachTarget : sc::event<EvtReachTarget>
{
};
struct EvtExposureActive : sc::event<EvtExposureActive>
{
};
struct EvtExposureInactive : sc::event<EvtExposureInactive>
{
};
struct EvtMotionKeySelected : sc::event<EvtMotionKeySelected>
{
};
struct EvtNoMotionKeySelected : sc::event<EvtNoMotionKeySelected>
{
};

} // namespace TKP
} // namespace NewRT
