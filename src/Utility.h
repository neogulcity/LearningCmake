#pragma once

namespace Utility
{
    // Return curent build process is in debug or not.
    inline bool IsDebug()
    {
        #ifdef _DEBUG
            return true;
        #else
            return false;
        #endif
    }
}