#include <iostream>
#include "MachineEvent.h"
#include "StateAction.h"
#include "TraitId.h"
#include "ddsmanager.h"
#include "ddsmaster.h"
#include "keypadPlugin.h"
#include "keypadSupport.h"
#include "msgManager.h"
#include "tkpManager.h"
#include "trait_helper_micro.h"
using namespace NewRT;
using namespace NewRT::TraitCommon;
namespace NewRT
{
namespace TKP
{
TkpManager::TkpManager()
{
}
void TkpManager::run()
{
    initKeyStateMachine();
    initDDS();
    MsgManager::getInstance()->process_queue_msg();
}
bool TkpManager::initDDS()
{
    NewRT::DDS::Pub::Publisher<TraitKeypad::FunctionActiveStateReport>(
        TraitKeypad::TOPIC_KEYPAD_FUNCTION_ACTIVE_STATE_REPORT)
        .enterCallbackEdit()
        .publicationMatched([](NewRT::DDS::Pub::DataWriter *, const NewRT::DDS::Pub::PublicationMatchedStatus &status) {
            std::cout << "DDSMsgSender(TOPIC_KEYPAD_FUNCTION_ACTIVE_STATE_REPORT) found publication "
                      << (status.current_count_change < 0 ? "dismached" : "matched") << std::endl;
            std::cout << "Currently there is " << std::to_string(status.current_count) << " remote DataReaders matched"
                      << std::endl;
        })
        .leaveCallbackEdit();

    NewRT::DDS::Pub::Publisher<TraitKeypad::PvsInformationReport>(TraitKeypad::TOPIC_KEYPAD_PVS_INFO_REPORT)
        .enterCallbackEdit()
        .publicationMatched([](NewRT::DDS::Pub::DataWriter *, const NewRT::DDS::Pub::PublicationMatchedStatus &status) {
            std::cout << "DDSMsgSender(TOPIC_KEYPAD_PVS_INFO_REPORT) found publication "
                      << (status.current_count_change < 0 ? "dismached" : "matched") << std::endl;
            std::cout << "Currently there is " << std::to_string(status.current_count) << " remote DataReaders matched"
                      << std::endl;
        })
        .leaveCallbackEdit();

    NewRT::DDS::Pub::Publisher<TraitKeypad::KeySwitchStateReport>(TraitKeypad::TOPIC_KEYPAD_KEY_SWITCH_STATE_REPORT)
        .enterCallbackEdit()
        .publicationMatched([](NewRT::DDS::Pub::DataWriter *, const NewRT::DDS::Pub::PublicationMatchedStatus &status) {
            std::cout << "DDSMsgSender(TOPIC_KEYPAD_KEY_SWITCH_STATE_REPORT) found publication "
                      << (status.current_count_change < 0 ? "dismached" : "matched") << std::endl;
            std::cout << "Currently there is " << std::to_string(status.current_count) << " remote DataReaders matched"
                      << std::endl;
        })
        .leaveCallbackEdit();

    NewRT::DDS::Pub::Publisher<TraitKeypad::MessageReport>(TraitKeypad::TOPIC_KEYPAD_MESSAGE_REPORT)
        .enterCallbackEdit()
        .publicationMatched([](NewRT::DDS::Pub::DataWriter *, const NewRT::DDS::Pub::PublicationMatchedStatus &status) {
            std::cout << "DDSMsgSender(TOPIC_KEYPAD_MESSAGE_REPORT) found publication "
                      << (status.current_count_change < 0 ? "dismached" : "matched") << std::endl;
            std::cout << "Currently there is " << std::to_string(status.current_count) << " remote DataReaders matched"
                      << std::endl;
        })
        .leaveCallbackEdit();
    MsgManager::getInstance()->subscribeDDS<TraitKeypad::FunctionEnableRequest>(
        TraitKeypad::TOPIC_KEYPAD_FUNCTION_ENABLE_REQ,
        std::bind(&TkpManager::handleFuncEnableReq, this, std::placeholders::_1));
    MsgManager::getInstance()->subscribeDDS<TraitKeypad::MotionStatusReport>(
        TraitKeypad::TOPIC_KEYPAD_MOTION_STATUS_REPORT,
        std::bind(&TkpManager::handleMotionStatus, this, std::placeholders::_1));
    MsgManager::getInstance()->subscribe<KeyEvent>(Msg::MsgKeyEvent,
                                                   std::bind(&TkpManager::handlekeyEvent, this, std::placeholders::_1));
}

bool TkpManager::initKeyStateMachine()
{
    m_stateActions      = std::make_shared<StateAction>();
    m_gantryMotionKeySm = std::make_unique<MotionKeyMachine>(m_stateActions, TkpKeyCode::KEY_GANTY_MOTION);
    m_PSDMMotionKeySm   = std::make_unique<MotionKeyMachine>(m_stateActions, TkpKeyCode::KEY_PSDM_MOTION);
    m_snoutMotionKeySm  = std::make_unique<MotionKeyMachine>(m_stateActions, TkpKeyCode::KEY_SNOUT_MOTION);
    m_MEBKeySm          = std::make_unique<MEBKeyMachine>(m_stateActions);
    m_XRayOnSm          = std::make_unique<XRayOnKeyMachine>(m_stateActions);

    m_gantryMotionKeySm->initiate();
    m_PSDMMotionKeySm->initiate();
    m_snoutMotionKeySm->initiate();
    m_MEBKeySm->initiate();
    m_XRayOnSm->initiate();
    return true;
}

void TkpManager::handleFuncEnableReq(const TraitKeypad::FunctionEnableRequest &req)
{
    for (int index = 0; index < req.functions.length(); index++)
    {
        auto req_item       = req.functions[index];
        int32_t functionId  = -1;
        int32_t enableState = -1;
        for (int trait_index = 0; trait_index < req_item.length(); trait_index++)
        {
            auto trait_value_item = req_item[trait_index];
            if (trait_value_item.tid == TraitIdTable::TraitIdKeypad::TRAIT_ID_KEYPAD_FUNCTION_ID)
            {
                functionId = TraitHelper::fromTraitData<int32_t>(trait_value_item.tval);
            }
            if (trait_value_item.tid == TraitIdTable::TraitIdKeypad::TRAIT_ID_KEYPAD_FUNCTION_ENABLE_STATE)
            {
                enableState = TraitHelper::fromTraitData<int32_t>(trait_value_item.tval);
            }
        }
        if (functionId >= 0 && enableState >= 0)
        {
            std::cout << "Fucntion Enalbe Request functionId=" << functionId << " enableState=" << enableState
                      << std::endl;
            onFuncEnableReq(functionId, enableState);
        }
    }
}

void TkpManager::handleMotionStatus(const TraitKeypad::MotionStatusReport &report)
{
    for (int index = 0; index < report.status.length(); index++)
    {
        auto item          = report.status[index];
        int32_t status     = -1;
        int32_t functionId = -1;
        for (int trait_index = 0; trait_index < item.length(); trait_index++)
        {
            auto trait_value_item = item[trait_index];
            if (trait_value_item.tid == TraitIdTable::TraitIdKeypad::TRAIT_ID_KEYPAD_FUNCTION_ID)
            {
                functionId = TraitHelper::fromTraitData<int32_t>(trait_value_item.tval);
            }
            if (trait_value_item.tid == TraitIdTable::TraitIdKeypad::TRAIT_ID_KEYPAD_MOTION_STATUS)
            {
                status = TraitHelper::fromTraitData<int32_t>(trait_value_item.tval);
            }
        }
        if (functionId >= 0 && status >= 0)
        {
            std::cout << "handleMotionStatus functionId=" << functionId << " status=" << status << std::endl;
            onMotionStatus(functionId, status);
        }
    }
}

void TkpManager::handlekeyEvent(const struct KeyEvent &msg)
{
    bool checkMotionKeySelected = false;
    auto evt                    = toTkpEvent(msg);
    switch (evt)
    {
    case EVT_GANTY_MOTION_PRESSED:
        m_gantryMotionKeySm->process_event(EvtKeyPress(TraitKeypad::GANTRY_MOTION));
        checkMotionKeySelected = true;
        break;
    case EVT_SNOUT_MOTION_RRESSED:
        m_snoutMotionKeySm->process_event(EvtKeyPress(TraitKeypad::SNOUT_MOTION));
        checkMotionKeySelected = true;
        break;
    case EVT_PSDM_MOTION_PRESSED:
        m_PSDMMotionKeySm->process_event(EvtKeyPress(TraitKeypad::PSDM));
        checkMotionKeySelected = true;
        break;
    case EVT_BEAM_XRAY_PAUSE_RRESSED:
        break;
    case EVT_BEAM_XRAY_STOP_PRESSED:
        break;
    case EVT_NEXT_POS_PRESSED:
        break;
    case EVT_XRAY_ON_PRESSED:
        m_XRayOnSm->process_event(EvtKeyPress(TraitKeypad::XRAY_ON));
        break;
    case EVT_XRAY_STATUS_INPUT_ACTIVE:
        std::cout << "XRay exposure active" << std::endl;
        m_XRayOnSm->process_event(EvtExposureActive());
        break;
    case EVT_XRAY_STATUS_INPUT_INACTIVE:
        std::cout << "XRay exposure inactive" << std::endl;
        m_XRayOnSm->process_event(EvtExposureInactive());
        break;
    case EVT_PVS_MODE_INPUT_OTH:
        std::cout << "PVS mode switch to Orthogonal" << std::endl;
        reportPvsMode(TraitKeypad::Orthogonal);
        break;
    case EVT_PVS_MODE_INPUT_CBCT:
        std::cout << "PVS mode switch to CBCT" << std::endl;
        reportPvsMode(TraitKeypad::CBCT);
        break;
    case EVT_MOTION_ENABLE_PRESSED:
        SMProcessMEBPress();
        break;
    case EVT_MOTION_ENABLE_RELEASED:
        SMProcessMEBRelease();
        break;
    default:
        std::cout << "unknown tkp key event" << std::endl;
        break;
    }
    if (checkMotionKeySelected)
    {
        SMProcessMotionKeySelected();
    }
}

void TkpManager::onFuncEnableReq(int functionId, int state)
{
    bool checkMotionKeySelected = false;
    switch (functionId)
    {
    case TraitKeypad::BEAM_ON:

        break;
    case TraitKeypad::PAUSE:
        break;
    case TraitKeypad::MOTION_ENABLE_BYPASS:

        break;
    case TraitKeypad::XRAY_ON:
        SMProcessFunctionState(state, m_XRayOnSm);
        break;
    case TraitKeypad::STOP:

        break;
    case TraitKeypad::PANEL_RETRACT:
        m_stateActions->reportFunctionAction(TraitKeypad::PANEL_RETRACT, TraitKeypad::ACTIVATED);
        break;
    case TraitKeypad::GANTRY_MOTION:
        SMProcessFunctionState(state, m_gantryMotionKeySm);
        checkMotionKeySelected = true;
        break;
    case TraitKeypad::SNOUT_MOTION:
        SMProcessFunctionState(state, m_snoutMotionKeySm);
        checkMotionKeySelected = true;
        break;
    case TraitKeypad::PSDM:
        SMProcessFunctionState(state, m_PSDMMotionKeySm);
        checkMotionKeySelected = true;
        break;
    default:
        std::cout << "unsupport function id:" << functionId << std::endl;
        break;
    }
    if (checkMotionKeySelected)
    {
        SMProcessMotionKeySelected();
    }
}

void TkpManager::onMotionStatus(int functionId, int state)
{
    switch (functionId)
    {
    case TraitKeypad::GANTRY_MOTION:
        SMProcessMotionStatus(state, m_gantryMotionKeySm);
        break;
    case TraitKeypad::SNOUT_MOTION:
        SMProcessMotionStatus(state, m_snoutMotionKeySm);
        break;
    case TraitKeypad::PSDM:
        SMProcessMotionStatus(state, m_PSDMMotionKeySm);
        break;
    default:
        std::cout << "unsupport function id:" << functionId << std::endl;
        return;
    }
    SMProcessMotionKeySelected();
}

bool TkpManager::isMotionKeySelected()
{
    if (isPSDMKeySelected() || isGantryMotionKeySelected() || isSnoutMotionKeySelected())
    {
        return true;
    }
    return false;
}

bool TkpManager::isPSDMKeySelected()
{
    if (m_PSDMMotionKeySm->getCurrentState() == "Selected" || m_PSDMMotionKeySm->getCurrentState() == "Moving")
    {
        std::cout << "PSDM is selected" << std::endl;
        return true;
    }
    else
    {
        return false;
    }
}
bool TkpManager::isGantryMotionKeySelected()
{
    if (m_gantryMotionKeySm->getCurrentState() == "Selected" || m_gantryMotionKeySm->getCurrentState() == "Moving")
    {
        std::cout << "gantry is selected" << std::endl;
        return true;
    }
    else
    {
        return false;
    }
}

bool TkpManager::isSnoutMotionKeySelected()
{
    if (m_snoutMotionKeySm->getCurrentState() == "Selected" || m_snoutMotionKeySm->getCurrentState() == "Moving")
    {
        std::cout << "snout is selected" << std::endl;
        return true;
    }
    else
    {
        return false;
    }
}

TkpKeyEvent TkpManager::toTkpEvent(const struct KeyEvent &ev)
{
    if (m_keyToKeyEvtMap.count(ev.code) > 0)
    {
        int index = (ev.pressed ? 1 : 0);
        return m_keyToKeyEvtMap.at(ev.code).at(index);
    }
    else
    {
        return EVT_MAX;
    }
}

bool TkpManager::reportPvsMode(TraitKeypad::PvsMode mode)
{
    TraitCommon::TraitValue arrTraitValue[1];
    arrTraitValue[0] = TraitHelper::toTrait<int>(TraitIdTable::TraitIdKeypad::TRAIT_ID_KEYPAD_PVS_MODE_SELECTION, mode);

    TraitCommon::TraitValueList pvsInformationSeq[1];
    pvsInformationSeq[0].from_array(arrTraitValue, 1);

    TraitKeypad::PvsInformationReport report;
    report.infos = pvsInformationSeq[0];
    NewRT::TCS::DDSManager::publish(TraitKeypad::TOPIC_KEYPAD_PVS_INFO_REPORT, report);
    return true;
}

bool TkpManager::reportKeySwitchState(TraitKeypad::KeySwitchState state)
{
    TraitKeypad::KeySwitchStateReport report;
    report.state = TraitHelper::toTrait<int>(TraitIdTable::TraitIdKeypad::TRAIT_ID_KEYPAD_KEY_SWITCH_OPTION, state);
    // NewRT::TCS::DDSManager::publish(TraitKeypad::TRAIT_ID_KEYPAD_PVS_MODE_SELECTION, report);
    return true;
}

bool TkpManager::reportErrMessage(std::vector<int> &msgId)
{
    return true;
}
} // namespace TKP
} // namespace NewRT