#include <fstream>
#include "Utility.h"
#include "spdlog/spdlog.h"
#include "iniparser.h"

int main()
{
    if (Utility::IsDebug()) {
        spdlog::set_level(spdlog::level::debug);
        spdlog::debug("Program is launched in debug.");
    }

    spdlog::debug("Hello World!");
    ini::ini abc("test2.ini");
    auto var = abc.get("[Settings]", "bUse", "true");
    spdlog::debug("{}", var);
    return 0;
}