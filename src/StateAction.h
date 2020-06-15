#pragma once

#include "backLight.h"
#include "keyStateMachine/IStateAction.h"

namespace NewRT
{
namespace TKP
{
class StateAction : public IStateAction
{
public:
    StateAction();
    virtual bool reportFunctionAction(NewRT::TraitKeypad::FunctionId functionId,
                                      NewRT::TraitKeypad::FunctionActiveState activeState);
    virtual bool reportExposureState(TraitKeypad::ExposureState state);
    virtual bool setKeyBoardLight(TkpKeyCode light, BACKLIGHT_STATE state);
    virtual bool enableXray(bool);

private:
    BackLight m_bl;
};
} // namespace TKP
} // namespace NewRT
