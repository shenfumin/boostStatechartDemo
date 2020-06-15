#include <errno.h>
#include <fcntl.h>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "backLight.h"
namespace NewRT
{
namespace TKP
{
using namespace std;
std::mutex BackLight::m_mutex;
std::string BackLight::m_lightPath                       = "/sys/class/leds";
std::map<TkpKeyCode, std::string> BackLight::m_lightsMap = {{TkpKeyCode::KEY_SNOUT_MOTION, "snoutMotion-led"},
                                                            {TkpKeyCode::KEY_GANTY_MOTION, "gantryMotion-led"},
                                                            {TkpKeyCode::KEY_XRAY_ON, "xRayOn-led"},
                                                            {TkpKeyCode::KEY_MOTION_ENABLE, "MEB-led"},
                                                            {TkpKeyCode::KEY_PSDM_MOTION, "snoutMotion-led"}};

BackLight::BackLight()
{
}

BackLight::~BackLight()
{
}

bool BackLight::setLight(TkpKeyCode light, BACKLIGHT_STATE state)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    std::cout << "BackLight::setLight" << light << std::endl;
    std::string path = m_lightPath + "/" + m_lightsMap.at(light);
    switch (state)
    {
    case BACKLIGHT_OFF:
    case BACKLIGHT_ON:
        turnLight(path, state);
        break;
    case BACKLIGHT_BLINK_SLOW:
        blinkLight(path, 1000);
        break;
    case BACKLIGHT_BLINK_FAST:
        blinkLight(path, 100);
        break;
    default:
        std::cout << "unspported state" << std::endl;
    }
    return true;
}

void BackLight::turnLight(const std::string &path, BACKLIGHT_STATE state)
{
    fstream fs;
    fs.open((path + "/trigger").c_str(), fstream::out);
    fs << "none" << flush;
    fs.close();
    fs.open((path + "/brightness").c_str(), fstream::out);
    fs << (state == BACKLIGHT_OFF ? "0" : "1") << flush;
    fs.close();
}

void BackLight::blinkLight(const std::string &path, uint16_t intervaltime)
{
    fstream fs;
    fs.open((path + "/trigger").c_str(), fstream::out);
    fs << "timer" << flush;
    fs.close();
    fs.open((path + "/delay_on").c_str(), fstream::out);
    fs << std::to_string(intervaltime) << flush;
    fs.close();
    fs.open((path + "/delay_off").c_str(), fstream::out);
    fs << std::to_string(intervaltime) << flush;
    fs.close();
}

void BackLight::setXray(bool enable)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    fstream fs;
    fs.open((m_lightPath + "/xRayOn-output" + "/brightness").c_str(), fstream::out);
    auto output = (enable ? XRAY_ENABLE : XRAY_DISABLE);
    fs << std::to_string(output) << flush;
    fs.close();
}

} // namespace TKP
} // namespace NewRT
