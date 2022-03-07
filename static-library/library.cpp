#include "library.h"
#include <iostream>

namespace static_library
{
    void hello(){
        std::cout << "static library hello() called!" << std::endl;
    }
} 