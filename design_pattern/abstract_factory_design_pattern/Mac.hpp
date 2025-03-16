
#ifndef MAC_HPP
#define MAC_HPP

#include "Laptop.hpp"

class Mac : public Laptop {
    public:
        OperatingSystem* getOS() override;
        GPU* getGPU() override;
};

#endif