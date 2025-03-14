
#ifndef VEHICLE_FACTORY_HPP
#define VEHICLE_FACTORY_HPP

#include "Vehicle.hpp"
#include <string>

class VehicleFactory {
    public:
        static Vehicle* createVehicle(std::string type);
};

#endif