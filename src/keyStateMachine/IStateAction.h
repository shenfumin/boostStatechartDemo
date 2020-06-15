
#pragma once
#include <memory>
#include "keyBoard.h"
#include "keypadPlugin.h"
namespace NewRT
{
namespace TKP
{

class IStateAction
{
public:
    using Ptr = std::shared_ptr<IStateAction>;

public:
    virtual bool reportFunctionAction(NewRT::TraitKeypad::FunctionId functionId,
                                      NewRT::TraitKeypad::FunctionActiveState activeState) = 0;
    virtual bool reportExposureState(NewRT::TraitKeypad::ExposureState state)              = 0;
    virtual bool setKeyBoardLight(TkpKeyCode light, BACKLIGHT_STATE state)                 = 0;
    virtual bool enableXray(bool)                                                          = 0;
    ~IStateAction()
    {
    }
};

} // namespace TKP
} // namespace NewRT
