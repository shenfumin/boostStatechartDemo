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
namespace NewRT
{
namespace TKP
{

struct MotionDisable;
struct MotionEnable;
struct MotionSelected;
struct MotionMoving;
struct MotionKeyMachine : sc::state_machine<MotionKeyMachine, MotionDisable>
{
public:
    MotionKeyMachine(IStateAction::Ptr &act, TkpKeyCode key) : m_actions(act), m_key(key)
    {
    }
    std::string getCurrentState() const
    {
        if (state_cast<const MotionDisable *>() != 0)
        {
            return "Disable";
        }
        else if (state_cast<const MotionEnable *>() != 0)
        {
            return "Enable";
        }
        else if (state_cast<const MotionSelected *>() != 0)
        {
            return "Selected";
        }
        else if (state_cast<const MotionMoving *>() != 0)
        {
            return "Moving";
        }
        return "unknown";
    }

    TkpKeyCode getKey() const
    {
        return m_key;
    }
    IStateAction::Ptr actions() const
    {
        return m_actions;
    }

private:
    IStateAction::Ptr &m_actions;
    TkpKeyCode m_key;
};

struct MotionDisable : sc::state<MotionDisable, MotionKeyMachine>
{
    typedef sc::custom_reaction<EvtFunctionEnable> reactEnable;
    typedef boost::mpl::list<reactEnable> reactions;
    sc::result react(const EvtFunctionEnable &)
    {
        auto key    = context<MotionKeyMachine>().getKey();
        auto action = context<MotionKeyMachine>().actions();
        action->setKeyBoardLight(key, BACKLIGHT_ON);
        std::cout << "turn on light:" << key << std::endl;
        return transit<MotionEnable>();
    }

    MotionDisable(my_context ctx) : my_base(ctx)
    {
        std::cout << "enter MotionEnable" << std::endl;
    }
    ~MotionDisable()
    {
        std::cout << "exit MotionEnable" << std::endl;
    }
};

struct MotionEnable : sc::state<MotionEnable, MotionKeyMachine>
{
    typedef sc::custom_reaction<EvtFunctionDisable> reactDisable;
    typedef sc::custom_reaction<EvtKeyPress> reactSelect;
    typedef boost::mpl::list<reactDisable, reactSelect> reactions;

    sc::result react(const EvtFunctionDisable &)
    {
        auto key    = context<MotionKeyMachine>().getKey();
        auto action = context<MotionKeyMachine>().actions();
        action->setKeyBoardLight(key, BACKLIGHT_OFF);
        std::cout << "turn off light:" << key << std::endl;
        return transit<MotionDisable>();
    }

    sc::result react(const EvtKeyPress &)
    {
        auto key    = context<MotionKeyMachine>().getKey();
        auto action = context<MotionKeyMachine>().actions();
        action->setKeyBoardLight(key, BACKLIGHT_BLINK_SLOW);
        std::cout << "BACKLIGHT_BLINK_SLOW light:" << key << std::endl;
        return transit<MotionSelected>();
    }

    MotionEnable(my_context ctx) : my_base(ctx)
    {
        std::cout << "enter MotionEnable" << std::endl;
    }
    ~MotionEnable()
    {
        std::cout << "exit MotionEnable" << std::endl;
    }
};

struct MotionSelected : sc::state<MotionSelected, MotionKeyMachine>
{
    typedef sc::custom_reaction<EvtFunctionDisable> reactDisable;
    typedef sc::custom_reaction<EvtKeyPress> reactEnable;
    typedef sc::custom_reaction<EvtMoving> reactMoving;
    typedef boost::mpl::list<reactDisable, reactEnable, reactMoving> reactions;

    sc::result react(const EvtFunctionDisable &)
    {
        auto key    = context<MotionKeyMachine>().getKey();
        auto action = context<MotionKeyMachine>().actions();
        action->setKeyBoardLight(key, BACKLIGHT_OFF);
        std::cout << "turn off light:" << key << std::endl;
        return transit<MotionDisable>();
    }

    sc::result react(const EvtKeyPress &)
    {
        auto key    = context<MotionKeyMachine>().getKey();
        auto action = context<MotionKeyMachine>().actions();
        action->setKeyBoardLight(key, BACKLIGHT_ON);
        std::cout << "BACKLIGHT_BLINK_SLOW light:" << key << std::endl;
        return transit<MotionEnable>();
    }

    sc::result react(const EvtMoving &)
    {
        auto key    = context<MotionKeyMachine>().getKey();
        auto action = context<MotionKeyMachine>().actions();
        action->setKeyBoardLight(key, BACKLIGHT_BLINK_FAST);
        std::cout << "BACKLIGHT_BLINK_FAST light:" << key << std::endl;
        return transit<MotionMoving>();
    }

    MotionSelected(my_context ctx) : my_base(ctx)
    {
        std::cout << "enter MotionSelected" << std::endl;
    }
    ~MotionSelected()
    {
        std::cout << "exit MotionSelected" << std::endl;
    }
};

struct MotionMoving : sc::state<MotionMoving, MotionKeyMachine>
{
    typedef sc::custom_reaction<EvtFunctionDisable> reactDisable;
    typedef sc::custom_reaction<EvtMotionStoped> reactNotMoving;
    typedef sc::custom_reaction<EvtReachTarget> reactReachTarget;
    typedef boost::mpl::list<reactDisable, reactNotMoving, reactReachTarget> reactions;

    sc::result react(const EvtFunctionDisable &)
    {
        auto key    = context<MotionKeyMachine>().getKey();
        auto action = context<MotionKeyMachine>().actions();
        action->setKeyBoardLight(key, BACKLIGHT_OFF);
        std::cout << "BACKLIGHT_OFF light:" << key << std::endl;
        return transit<MotionDisable>();
    }

    sc::result react(const EvtMotionStoped &)
    {
        auto key    = context<MotionKeyMachine>().getKey();
        auto action = context<MotionKeyMachine>().actions();
        action->setKeyBoardLight(key, BACKLIGHT_BLINK_SLOW);
        std::cout << "BACKLIGHT_BLINK_SLOW light:" << key << std::endl;
        return transit<MotionEnable>();
    }

    sc::result react(const EvtReachTarget &)
    {
        auto key    = context<MotionKeyMachine>().getKey();
        auto action = context<MotionKeyMachine>().actions();
        action->setKeyBoardLight(key, BACKLIGHT_BLINK_FAST);
        std::cout << "BACKLIGHT_BLINK_FAST light:" << key << std::endl;
        return transit<MotionMoving>();
    }
    MotionMoving(my_context ctx) : my_base(ctx)
    {
        std::cout << "enter MotionMoving" << std::endl;
    }
    ~MotionMoving()
    {
        std::cout << "exit MotionMoving" << std::endl;
    }
};

} // namespace TKP
} // namespace NewRT
