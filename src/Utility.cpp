#include <iostream>
#include "Utility.h"

namespace Utility
{
    void Display(std::string arg)
    {
        std::cout << arg << std::endl;
    }

    bool IsDebug()
    {
        #ifdef _DEBUG
            return true;
        #else
            return false;
        #endif
    }
}