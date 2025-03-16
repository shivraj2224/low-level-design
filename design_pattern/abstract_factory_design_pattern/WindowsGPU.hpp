
#ifndef WINDOWS_GPU_HPP
#define WINDOWS_GPU_HPP

#include "GPU.hpp"

class WindowsGPU: public GPU {
    public:
        void info() override;
};

#endif