
#ifndef CAR_HPP
#define CAR_HPP

#include "Vehicle.hpp"


class Car: public Vehicle {
    public:
        void drive() override;
};

#endif