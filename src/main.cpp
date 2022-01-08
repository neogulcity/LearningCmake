#include <fstream>
#include "Utility.h"
#include "spdlog/spdlog.h"

int main()
{
    if (Utility::IsDebug()) {
        spdlog::set_level(spdlog::level::debug);
        spdlog::debug("Program is launched in debug.");
    }

    spdlog::debug("Hello World!");

    return 0;
}