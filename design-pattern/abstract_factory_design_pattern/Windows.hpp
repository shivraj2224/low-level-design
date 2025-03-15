
#ifndef WINDOWS_HPP
#define WINDOWS_HPP

#include "Laptop.hpp"

class Windows : public Laptop {
    public:
        OperatingSystem* getOS() override;
        GPU* getGPU() override;
};

#endif