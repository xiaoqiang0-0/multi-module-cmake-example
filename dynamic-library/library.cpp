#include "library.h"
#include <iostream>

namespace dynamic_library {
    void hello() {
        std::cout << "dynamic library => hello() called!" << std::endl;
    }

    int mmain(int argc, char *argv[]) {
        for (int i = 0; i < argc; ++i) {
            std::cout << "dynamic library => " << argv[i] << std::endl;
        }
        return 0;
    }

    int LibClassExample::mmain(int argc, char *argv[]) {
        for (int i = 0; i < argc; ++i) {
            std::cout << "[class] dynamic library => " << argv[i] << std::endl;
        }
        return 0;
    }
}