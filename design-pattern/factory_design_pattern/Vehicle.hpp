
#ifndef VEHICLE_HPP
#define VEHICLE_HPP

class Vehicle{
    public:
        virtual void drive() = 0;
        virtual ~Vehicle() = default;
};

#endif