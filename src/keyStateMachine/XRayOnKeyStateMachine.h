#pragma once

#include <boost/statechart/custom_reaction.hpp>
#include <boost/statechart/event.hpp>
#include <boost/statechart/simple_state.hpp>
#include <boost/statechart/state_machine.hpp>
#include <boost/statechart/transition.hpp>
#include <chrono>
#include <ctime>
#include <iostream>
#include <thread>
#include "IStateAction.h"
#include "MachineEvent.h"
#include "keyBoard.h"
#include "keypadPlugin.h"
namespace NewRT
{
namespace TKP
{

struct XRayOnDisable;
struct XRayOnEnable;
struct XRayOnSelected;
struct XRayOnExposuring;

struct XRayOnKeyMachine : sc::state_machine<XRayOnKeyMachine, XRayOnDisable>
{
public:
    XRayOnKeyMachine(IStateAction::Ptr &act) : m_actions(act)
    {
    }
    std::string getCurrentState() const
    {
        if (state_cast<const XRayOnDisable *>() != 0)
        {
            return "Disable";
        }
        else if (state_cast<const XRayOnEnable *>() != 0)
        {
            return "Enable";
        }
        else if (state_cast<const XRayOnSelected *>() != 0)
        {
            return "Selected";
        }
        else if (state_cast<const XRayOnExposuring *>() != 0)
        {
            return "Exposuring";
        }
        return "unknown";
    }

    IStateAction::Ptr &actions()
    {
        return m_actions;
    }

private:
    IStateAction::Ptr &m_actions;
};

struct XRayOnDisable : sc::state<XRayOnDisable, XRayOnKeyMachine>
{
    typedef sc::transition<EvtFunctionEnable, XRayOnEnable> reactEnable;
    typedef boost::mpl::list<reactEnable> reactions;
    XRayOnDisable(my_context ctx) : my_base(ctx)
    {
        std::cout << "enter XRayOnDisable" << std::endl;
        auto action = context<XRayOnKeyMachine>().actions();
        action->setKeyBoardLight(KEY_XRAY_ON, BACKLIGHT_OFF);
        action->enableXray(false);
        std::cout << "BACKLIGHT_OFF KEY_XRAY_ON and disable x-ray output:" << std::endl;
    }
    ~XRayOnDisable()
    {
        std::cout << "exit XRayOnDisable" << std::endl;
    }
};

struct XRayOnEnable : sc::state<XRayOnEnable, XRayOnKeyMachine>
{
    typedef sc::transition<EvtFunctionDisable, XRayOnDisable> reactDisable;
    typedef sc::custom_reaction<EvtKeyPress> reactSelect;
    typedef boost::mpl::list<reactDisable, reactSelect> reactions;

    sc::result react(const EvtKeyPress &)
    {
        std::cout << "send XRAY_ON ACTIVATED:" << std::endl;
        auto action = context<XRayOnKeyMachine>().actions();
        action->reportFunctionAction(TraitKeypad::XRAY_ON, TraitKeypad::ACTIVATED);
        action->enableXray(true);
        return transit<XRayOnSelected>();
    }

    XRayOnEnable(my_context ctx) : my_base(ctx)
    {
        std::cout << "enter XRayOnEnable" << std::endl;
        auto action = context<XRayOnKeyMachine>().actions();
        action->setKeyBoardLight(KEY_XRAY_ON, BACKLIGHT_ON);
        std::cout << "BACKLIGHT_ON KEY_XRAY_ON:" << std::endl;
    }
    ~XRayOnEnable()
    {
        std::cout << "exit XRayOnEnable" << std::endl;
    }
};

struct XRayOnSelected : sc::state<XRayOnSelected, XRayOnKeyMachine>
{
    typedef sc::transition<EvtFunctionDisable, XRayOnDisable> reactDisable;
    typedef sc::transition<EvtExposureActive, XRayOnExposuring> reactExposuring;
    typedef boost::mpl::list<reactDisable, reactExposuring> reactions;
    XRayOnSelected(my_context ctx) : my_base(ctx)
    {
        std::cout << "-> XRayOnSelected" << std::endl;
        auto action = context<XRayOnKeyMachine>().actions();
        action->setKeyBoardLight(KEY_XRAY_ON, BACKLIGHT_BLINK_SLOW);
        std::cout << "BACKLIGHT_BLINK_SLOW KEY_XRAY_ON:" << std::endl;
    }

    ~XRayOnSelected()
    {
        std::cout << "exit XRayOnSelected" << std::endl;
    }
};

struct XRayOnExposuring : sc::state<XRayOnExposuring, XRayOnKeyMachine>
{
    typedef sc::transition<EvtFunctionDisable, XRayOnDisable> reactDisable;
    typedef sc::custom_reaction<EvtExposureInactive> reactNotExposuring;
    typedef boost::mpl::list<reactDisable, reactNotExposuring> reactions;

    sc::result react(const EvtExposureInactive &)
    {
        std::cout << "-> XRayOnDisable" << std::endl;
        auto action = context<XRayOnKeyMachine>().actions();
        action->reportExposureState(TraitKeypad::NotInExposure);
        return transit<XRayOnDisable>();
    }

    XRayOnExposuring(my_context ctx) : my_base(ctx)
    {
        std::cout << "-> XRayOnExposuring" << std::endl;
        auto action = context<XRayOnKeyMachine>().actions();
        action->reportExposureState(TraitKeypad::InExposure);
        action->setKeyBoardLight(KEY_XRAY_ON, BACKLIGHT_BLINK_FAST);
        std::cout << "BACKLIGHT_BLINK_FAST KEY_XRAY_ON:" << std::endl;
    }

    ~XRayOnExposuring()
    {
        std::cout << "exit XRayOnExposuring" << std::endl;
    }
};

} // namespace TKP
} // namespace NewRT
