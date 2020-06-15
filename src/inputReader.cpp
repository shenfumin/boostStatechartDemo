#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "msgManager.h"
namespace NewRT
{
namespace TKP
{

InputReader::InputReader(const std::string &path)
{
    m_descriptor = openKeyboard(path.c_str());
}

InputReader::~InputReader()
{
    if (m_descriptor != -1)
    {
        close(m_descriptor);
    }
}

int InputReader::openKeyboard(const char *path)
{
    int fd = open(path, O_RDONLY);
    if (fd < 0)
    {
        std::cout << "open() failed:" << strerror(errno) << std::endl;
        return -1;
    }
    return fd;
}

bool InputReader::isReadable()
{
    if (m_descriptor < 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

std::vector<uint16_t> InputReader::processEvent(struct input_event *ev)
{
    std::vector<uint16_t> event;
    switch (ev->type)
    {
    case EV_SYN:
        break;
    case EV_MSC:
        break;
    case EV_LED:
    case EV_KEY:
        event.push_back(ev->code);
        event.push_back(ev->value);
        return event;
        break;
    default:
        std::cout << "Warning: unexpected event type:" << ev->type << std::endl;
    }
    return {0, 0};
}

std::vector<uint16_t> InputReader::getKeyEvent()
{
    int const BUFFER_SIZE = 64;
    struct input_event ibuffer[BUFFER_SIZE];
    int r, events, i;
    std::vector<uint16_t> evtInfo;

    r = read(m_descriptor, ibuffer, sizeof(struct input_event) * BUFFER_SIZE);

    if (r > 0)
    {
        events = r / sizeof(struct input_event);
        for (i = 0; i < events; i++)
        {
            evtInfo = processEvent(&ibuffer[i]);
            if (evtInfo[0] > 0)
            {
                return evtInfo;
            }
        }
    }
    else
    {
        std::cout << "read() failed:" << strerror(errno) << std::endl;
        return {0, 0};
    }
}

std::string InputReader::getKeyName(uint16_t keycode)
{
    if (m_keymap.count(keycode) > 0)
    {
        return m_keymap[keycode];
    }
    else
    {
        return "unknown";
    }
}

void InputReader::run()
{
    KeyEvent keyEvt;
    std::vector<uint16_t> rawEvt;
    while (true)
    {
        rawEvt = getKeyEvent();
        if (rawEvt.size() > 0)
        {
            keyEvt.code    = rawEvt[0];
            keyEvt.pressed = (rawEvt[1] == 1 ? true : false);
            if (m_keymap.count(keyEvt.code) > 0)
            {
                MsgManager::getInstance()->postMsg<struct KeyEvent>(Msg::MsgKeyEvent, keyEvt);
                std::cout << getKeyName(keyEvt.code) << " " << (keyEvt.pressed ? "pressed" : "released") << std::endl;
            }
            else
            {
                std::cout << "unsupport keycode:" << keyEvt.code << " pressed:" << keyEvt.pressed << std::endl;
            }
        }
    }
}

} // namespace TKP
} // namespace NewRT