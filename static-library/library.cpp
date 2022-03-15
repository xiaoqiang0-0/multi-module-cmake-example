#include "library.h"
#include <iostream>

namespace static_library {
    void hello() {
        std::cout << "static library => hello() called!" << std::endl;
    }

    int mmain(int argc, char *argv[]) {
        for (int i = 0; i < argc; ++i) {
            std::cout << "static library => " << argv[i] << std::endl;
        }
        return 0;
    }

    int LibClassExample::mmain(int argc, char *argv[]) {
        for (int i = 0; i < argc; ++i) {
            std::cout << "[class] static library => " << argv[i] << std::endl;
        }
        return 0;
    }
}

