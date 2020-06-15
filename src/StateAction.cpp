#include "keypadPlugin.h"
#include "keypadSupport.h"
#include "trait_helper_micro.h"
using namespace NewRT;
using namespace NewRT::TraitCommon;
namespace NewRT
{
namespace TKP
{

StateAction::StateAction()
{
}

bool StateAction::reportFunctionAction(TraitKeypad::FunctionId functionId, TraitKeypad::FunctionActiveState activeState)
{
    TraitCommon::TraitValue arrTraitValue[2];
    arrTraitValue[0] = TraitHelper::toTrait<int>(TraitIdTable::TraitIdKeypad::TRAIT_ID_KEYPAD_FUNCTION_ID, functionId);
    arrTraitValue[1] =
        TraitHelper::toTrait<int>(TraitIdTable::TraitIdKeypad::TRAIT_ID_KEYPAD_FUNCTION_ACTIVE_STATE, activeState);

    TraitKeypad::FunctionActiveStateItem funcActItemSeq[1];
    funcActItemSeq[0].from_array(arrTraitValue, 2);

    TraitKeypad::FunctionActiveStateReport report;
    report.activeStates.from_array(funcActItemSeq, 1);
    NewRT::TCS::DDSManager::publish(TraitKeypad::TOPIC_KEYPAD_FUNCTION_ACTIVE_STATE_REPORT, report);
    return true;
}

bool StateAction::reportExposureState(TraitKeypad::ExposureState state)
{
    TraitCommon::TraitValue arrTraitValue[1];
    arrTraitValue[0] =
        TraitHelper::toTrait<int>(TraitIdTable::TraitIdKeypad::TRAIT_ID_KEYPAD_PVS_EXPOSURE_STATE, state);

    TraitCommon::TraitValueList pvsInformationSeq[1];
    pvsInformationSeq[0].from_array(arrTraitValue, 1);

    TraitKeypad::PvsInformationReport report;
    report.infos = pvsInformationSeq[0];

    NewRT::TCS::DDSManager::publish(TraitKeypad::TOPIC_KEYPAD_PVS_INFO_REPORT, report);
    return true;
}

bool StateAction::setKeyBoardLight(TkpKeyCode light, BACKLIGHT_STATE state)
{
    m_bl.setLight(light, state);
}

bool StateAction::enableXray(bool state)
{
    if (state)
    {
        m_bl.setXray(true);
        usleep(20000);
        m_bl.setXray(false);
    }
    else
    {
        m_bl.setXray(false);
    }
}

} // namespace TKP
} // namespace NewRT