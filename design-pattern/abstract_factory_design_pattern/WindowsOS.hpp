
#ifndef WINDOWS_OS_HPP
#define WINDOWS_OS_HPP

#include "OperatingSystem.hpp"

class WindowsOS: public OperatingSystem {
    public:
        void info() override;
};

#endif