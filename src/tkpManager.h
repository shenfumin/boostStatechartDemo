#pragma once
#include <map>
#include <vector>
#include "MEBKeyStateMachine.h"
#include "MotionKeyStateMachine.h"
#include "XRayOnKeyStateMachine.h"
#include "backLight.h"
#include "keyBoard.h"
#include "keypadPlugin.h"
#include "trait_helper_micro.h"
namespace NewRT
{
namespace TKP
{

class TkpManager : public std::enable_shared_from_this<TkpManager>
{

public:
    using Ptr = std::shared_ptr<TkpManager>;
    TkpManager();
    void run();

private:
    void handleFuncEnableReq(const NewRT::TraitKeypad::FunctionEnableRequest &req);
    void handleMotionStatus(const NewRT::TraitKeypad::MotionStatusReport &report);
    void handlekeyEvent(const struct KeyEvent &msg);
    void onFuncEnableReq(int functionId, int state);
    void onMotionStatus(int functionId, int state);
    bool reportPvsMode(TraitKeypad::PvsMode mode);
    bool reportKeySwitchState(TraitKeypad::KeySwitchState state);
    bool reportErrMessage(std::vector<int> &msgId);
    bool initDDS();
    bool initKeyStateMachine();
    bool isMotionKeySelected();
    bool isGantryMotionKeySelected();
    bool isPSDMKeySelected();
    bool isSnoutMotionKeySelected();
    TkpKeyEvent toTkpEvent(const struct KeyEvent &ev);

    std::unique_ptr<MotionKeyMachine> m_gantryMotionKeySm;
    std::unique_ptr<MotionKeyMachine> m_snoutMotionKeySm;
    std::unique_ptr<MotionKeyMachine> m_PSDMMotionKeySm;
    std::unique_ptr<MEBKeyMachine> m_MEBKeySm;
    std::unique_ptr<XRayOnKeyMachine> m_XRayOnSm;
    std::shared_ptr<IStateAction> m_stateActions;
    const std::map<int, int> m_keyToFuncMap = {{TkpKeyCode::KEY_GANTY_MOTION, TraitKeypad::GANTRY_MOTION},
                                               {TkpKeyCode::KEY_SNOUT_MOTION, TraitKeypad::SNOUT_MOTION},
                                               {TkpKeyCode::KEY_PSDM_MOTION, TraitKeypad::PSDM}};

    const std::map<int, std::vector<TkpKeyEvent>> m_keyToKeyEvtMap = {
        {KEY_MOTION_ENABLE, {EVT_MOTION_ENABLE_RELEASED, EVT_MOTION_ENABLE_PRESSED}},
        {KEY_BEAM_ON, {EVT_BEAM_ON_RELEASED, EVT_BEAM_ON_PRESSED}},
        {KEY_BEAM_XRAY_PAUSE, {EVT_BEAM_XRAY_PAUSE_RELEASED, EVT_BEAM_XRAY_PAUSE_RRESSED}},
        {KEY_XRAY_ON, {EVT_XRAY_ON_RELEASED, EVT_XRAY_ON_PRESSED}},
        {KEY_BEAM_XRAY_STOP, {EVT_BEAM_XRAY_STOP_RELEASED, EVT_BEAM_XRAY_STOP_PRESSED}},
        {KEY_GANTY_MOTION, {EVT_GANTY_MOTION_RELEASED, EVT_GANTY_MOTION_PRESSED}},
        {KEY_SNOUT_MOTION, {EVT_SNOUT_MOTION_RELEASED, EVT_SNOUT_MOTION_RRESSED}},
        {KEY_PSDM_MOTION, {EVT_PSDM_MOTION_RELEASED, EVT_PSDM_MOTION_PRESSED}},
        {XRAY_STATUS_INPUT, {EVT_XRAY_STATUS_INPUT_INACTIVE, EVT_XRAY_STATUS_INPUT_ACTIVE}},
        {PVS_MODE_INPUT, {EVT_PVS_MODE_INPUT_OTH, EVT_PVS_MODE_INPUT_CBCT}},
        {KEY_F7, {EVT_F7_RELEASED, EVT_F7_PRESSED}},
    };
};

// clang-format off
#define SMProcessFunctionState(state, sm) \
    do \
    { \
        if (state == TraitKeypad::DISABLE) \
        { \
            sm->process_event(EvtFunctionDisable()); \
        } \
        else \
        { \
            sm->process_event(EvtFunctionEnable()); \
        } \
    } while (0)

#define SMProcessMotionKeySelected() \
    do \
    { \
        if (isMotionKeySelected()) \
        { \
            m_MEBKeySm->process_event(EvtMotionKeySelected()); \
        } \
        else \
        { \
            m_MEBKeySm->process_event(EvtNoMotionKeySelected()); \
        } \
    } while (0)

#define SMProcessMEBPress() \
    do \
    { \
        if (isGantryMotionKeySelected()) \
        { \
            m_MEBKeySm->process_event(EvtKeyPress(TraitKeypad::GANTRY_MOTION)); \
        } \
        if (isSnoutMotionKeySelected()) \
        { \
            m_MEBKeySm->process_event(EvtKeyPress(TraitKeypad::SNOUT_MOTION)); \
        } \
        if (isPSDMKeySelected()) \
        { \
            m_MEBKeySm->process_event(EvtKeyPress(TraitKeypad::PSDM)); \
        } \
    } while (0)

#define SMProcessMEBRelease() \
    do \
    { \
        if (isGantryMotionKeySelected()) \
        { \
            m_MEBKeySm->process_event(EvtKeyRelease(TraitKeypad::GANTRY_MOTION)); \
        } \
        if (isSnoutMotionKeySelected()) \
        { \
            m_MEBKeySm->process_event(EvtKeyRelease(TraitKeypad::SNOUT_MOTION)); \
        } \
        if (isPSDMKeySelected()) \
        { \
            m_MEBKeySm->process_event(EvtKeyRelease(TraitKeypad::PSDM)); \
        } \
    } while (0)

#define SMProcessMotionStatus(state, sm) \
    do \
    { \
        if (state == TraitKeypad::Stopped) \
        { \
            sm->process_event(EvtMotionStoped()); \
        } \
        else if (state == TraitKeypad::Moving) \
        { \
            sm->process_event(EvtMoving()); \
        } \
        else if (state == TraitKeypad::Reached) \
        { \
            sm->process_event(EvtMotionStoped()); \
        } \
    } while (0)

// clang-format on
} // namespace TKP
} // namespace NewRT
