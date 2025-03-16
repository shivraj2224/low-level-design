
#ifndef BUS_HPP
#define BUS_HPP

#include "Vehicle.hpp"

class Bus: public Vehicle {
    public:
        void drive() override;
};

#endif