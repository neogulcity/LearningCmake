#include <iostream>
#include "Utility.h"

int main()
{
    if (Utility::IsDebug())
        std::cout << "Program is launched in debug." << std::endl;
    
    Utility::Display("Main Start");
    return 0;
}