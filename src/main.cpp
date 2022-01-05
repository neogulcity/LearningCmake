#include <iostream>
#include "Utility.h"
#include "spdlog/spdlog.h"

int main()
{
    if (Utility::IsDebug())
        std::cout << "Program is launched in debug." << std::endl;
    
    spdlog::set_level(spdlog::level::debug);
    SPDLOG_DEBUG("Some debug message");

    return 0;
}