#include "Utility.h"

namespace Utility
{
    bool IsDebug()
    {
        #ifdef _DEBUG
            return true;
        #else
            return false;
        #endif
    }
}