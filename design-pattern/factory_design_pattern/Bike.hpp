
#ifndef BIKE_HPP
#define BIKE_HPP

#include "Vehicle.hpp"

class Bike: public Vehicle {
    public:
        void drive() override;
};

#endif