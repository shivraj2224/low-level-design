
#include <iostream>
#include "Windows.hpp"
#include "WindowsOS.hpp"
#include "WindowsGPU.hpp"

OperatingSystem* Windows::getOS(){
    return new WindowsOS();
}

GPU* Windows::getGPU(){
    return new WindowsGPU();
}