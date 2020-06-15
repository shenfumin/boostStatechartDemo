#include <boost/exception/diagnostic_information.hpp>
#include <boost/program_options.hpp>
#include <fstream>
#include <functional>
#include <iostream>
#include <thread>
#include <unistd.h>
#include "ddsmanager.h"
#include "inputReader.h"
#include "manager.h"
#include "tkpManager.h"

using namespace NewRT::TKP;
namespace po = boost::program_options;
int main(int argc, char *argv[])
{
    bool isDaemon = false;
    std::string keyboardPath;
    std::string configurationPath = "";
    po::options_description desc("Options");
    desc.add_options()("help,h", "produce help message")("daemon,d", "running in Daemon mode")(
        "path,p", po::value<std::string>(&keyboardPath)->default_value("/dev/input/event0"),
        "set keyboard input device path")("config,c", po::value<std::string>(&configurationPath)->default_value("./"),
                                          "set configuration path");
    po::variables_map vm;
    try
    {
        po::store(po::parse_command_line(argc, argv, desc), vm);
        po::notify(vm);
    }
    catch (boost::exception &e)
    {
        std::cerr << boost::diagnostic_information(e) << std::endl;
        return false;
    }
    if (vm.count("help"))
    {
        std::cout << desc << std::endl;
        return false;
    }
    if (vm.count("daemon"))
    {
        isDaemon = true;
        std::cout << "running in daemon mode " << std::endl;
    }
    if (vm.count("path"))
    {
        std::cout << "input device path was set to " << vm["path"].as<std::string>() << std::endl;
    }
    if (vm.count("config"))
    {
        std::cout << "configuration path was set to " << vm["config"].as<std::string>() << std::endl;
        configurationPath = vm["config"].as<std::string>();
    }
    std::ifstream ifs1(configurationPath + "conf.xml");
    if (!ifs1.is_open())
    {
        std::cout << "conf.xml file is not avaiable!! " << std::endl;
        return false;
    }
    std::ifstream ifs2(configurationPath + "qos_profiles.xml");
    if (!ifs2.is_open())
    {
        std::cout << "qos_profiles.xml file is not avaiable!! " << std::endl;
        return false;
    }
    if (isDaemon)
    {
        daemon(1, 1);
    }

    NewRT::DDS::master()->init(configurationPath + "conf.xml", configurationPath + "qos_profiles.xml");
    InputReader inputReader(keyboardPath);
    TkpManager tkpManager;
    std::thread t1([&] { tkpManager.run(); });
    std::thread t2([&] { inputReader.run(); });
    t1.join();
    t2.join();
    return 0;
}
