
#ifndef OPERATING_SYSTEM_HPP
#define OPERATING_SYSTEM_HPP

class OperatingSystem {
    public:
        virtual void info() = 0;
        virtual ~OperatingSystem() = default;
};

#endif