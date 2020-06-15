#pragma once

#include <linux/input.h>
#include <map>
#include <mutex>
#include <string>
#include "keyBoard.h"
namespace NewRT
{
namespace TKP
{
class BackLight
{
public:
    BackLight();
    ~BackLight();
    bool setLight(TkpKeyCode light, BACKLIGHT_STATE state);
    void setXray(bool enable);

private:
    void turnLight(const std::string &path, BACKLIGHT_STATE state);
    void blinkLight(const std::string &path, uint16_t intervaltime);
    static std::mutex m_mutex;
    static std::string m_lightPath;
    static std::map<TkpKeyCode, std::string> m_lightsMap;
};
} // namespace TKP
} // namespace NewRT
