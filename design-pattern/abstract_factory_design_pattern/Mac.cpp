
#include <iostream>
#include "Mac.hpp"
#include "MacOS.hpp"
#include "MacGPU.hpp"

OperatingSystem* Mac::getOS(){
    return new MacOS();
}

GPU* Mac::getGPU(){
    return new MacGPU();
}