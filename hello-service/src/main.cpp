//
// Created by 75616 on 2022/3/20.
//

#include "iostream"
#include "library.h"

int main(int argc, char*argv[]){
    static_library::hello();
    dynamic_library::hello();
    static_library::mmain(argc, argv);
    dynamic_library::mmain(argc, argv);
    auto * dExample = new dynamic_library::LibClassExample();
    auto * sExample = new static_library::LibClassExample();
    dExample->mmain(argc, argv);
    sExample->mmain(argc, argv);
    return 0;
}
