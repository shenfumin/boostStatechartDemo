#pragma once
#include <linux/input.h>
#include <map>
#include <string>
#include <vector>
#include "keyBoard.h"

namespace NewRT
{
namespace TKP
{

class InputReader
{
public:
    InputReader(const std::string &path);
    ~InputReader();
    void run();

private:
    int m_descriptor;
    int openKeyboard(const char *path);
    bool isReadable();
    std::vector<uint16_t> getKeyEvent();
    std::string getKeyName(uint16_t keycode);
    std::vector<uint16_t> processEvent(struct input_event *ev);
    std::map<uint16_t, std::string> m_keymap = {
        {KEY_GANTY_MOTION, "gantyMotion-btn"}, {KEY_SNOUT_MOTION, "snoutMotion-btn"},
        {KEY_PSDM_MOTION, "PSDM-btn"},         {KEY_MOTION_ENABLE, "MEB-btn"},
        {KEY_BEAM_ON, "beamOn-btn"},           {KEY_BEAM_XRAY_PAUSE, "pause-btn"},
        {KEY_BEAM_XRAY_STOP, "stop-btn"},      {KEY_XRAY_ON, "xRayOn-btn"},
        {KEY_NEXT_POS, "nextPos-btn"},         {XRAY_STATUS_INPUT, "xRayStatus-input"},
        {PVS_MODE_INPUT, "pvsMode-input"},     {KEY_F7, "F7"}};
};
} // namespace TKP
} // namespace NewRT
