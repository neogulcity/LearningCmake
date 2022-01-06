#include <iostream>
#include "Utility.h"
#include "spdlog/spdlog.h"

int main()
{
    if (Utility::IsDebug()) {
        spdlog::set_level(spdlog::level::debug);
        spdlog::debug("Program is launched in debug.");
    }
    
    std::string msg = "Hello World!";
    spdlog::debug("{}", msg);

    return 0;
}