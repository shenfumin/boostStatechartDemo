#pragma once

#include <boost/statechart/custom_reaction.hpp>
#include <boost/statechart/event.hpp>
#include <boost/statechart/simple_state.hpp>
#include <boost/statechart/state.hpp>
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

struct MEBDisable;
struct MEBEnable;
struct MEBKeyMachine : sc::state_machine<MEBKeyMachine, MEBDisable>
{
public:
    MEBKeyMachine(IStateAction::Ptr &act) : m_actions(act)
    {
    }
    std::string getCurrentState() const
    {
        if (state_cast<const MEBDisable *>() != 0)
        {
            return "Disable";
        }
        else if (state_cast<const MEBEnable *>() != 0)
        {
            return "Enable";
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

struct MEBDisable : sc::state<MEBDisable, MEBKeyMachine>
{
    typedef sc::transition<EvtMotionKeySelected, MEBEnable> reactEnable;
    typedef boost::mpl::list<reactEnable> reactions;
    MEBDisable(my_context ctx) : my_base(ctx)
    {
        std::cout << "enter MEBDisable" << std::endl;
        auto action = context<MEBKeyMachine>().actions();
        action->setKeyBoardLight(TkpKeyCode::KEY_MOTION_ENABLE, BACKLIGHT_OFF);
        std::cout << "turn off KEY_MOTION_ENABLE" << std::endl;
    }
    ~MEBDisable()
    {
        std::cout << "exit MEBDisable" << std::endl;
    }
};

struct MEBEnable : sc::state<MEBEnable, MEBKeyMachine>
{
    typedef sc::transition<EvtNoMotionKeySelected, MEBDisable> reactDisable;
    typedef sc::custom_reaction<EvtKeyPress> reactSelected;
    typedef sc::custom_reaction<EvtKeyRelease> reactRelease;
    typedef boost::mpl::list<reactDisable, reactSelected, reactRelease> reactions;

    sc::result react(const EvtKeyPress &evt)
    {
        auto action = context<MEBKeyMachine>().actions();
        action->reportFunctionAction(static_cast<NewRT::TraitKeypad::FunctionId>(evt.getFunctionId()),
                                     TraitKeypad::ACTIVATED);
        std::cout << "send ACTIVATED" << std::endl;
        return discard_event();
    }
    sc::result react(const EvtKeyRelease &evt)
    {
        auto action = context<MEBKeyMachine>().actions();
        action->reportFunctionAction(static_cast<NewRT::TraitKeypad::FunctionId>(evt.getFunctionId()),
                                     TraitKeypad::INACTIVATED);
        std::cout << "send INACTIVATED" << std::endl;
        return discard_event();
    }
    MEBEnable(my_context ctx) : my_base(ctx)
    {
        std::cout << "enter MEBEnable" << std::endl;
        auto action = context<MEBKeyMachine>().actions();
        action->setKeyBoardLight(TkpKeyCode::KEY_MOTION_ENABLE, BACKLIGHT_ON);
        std::cout << "turn on KEY_MOTION_ENABLE" << std::endl;
    }

    ~MEBEnable()
    {
        std::cout << "exit MEBEnable" << std::endl;
    }
};

} // namespace TKP
} // namespace NewRT
