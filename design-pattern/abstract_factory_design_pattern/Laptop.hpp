
#ifndef LAPTOP_HPP
#define LAPTOP_HPP

#include "GPU.hpp"
#include "OperatingSystem.hpp"

class Laptop {
    public:
        virtual OperatingSystem* getOS() = 0;
        virtual GPU* getGPU() = 0;
        virtual ~Laptop() = default;
};

#endif