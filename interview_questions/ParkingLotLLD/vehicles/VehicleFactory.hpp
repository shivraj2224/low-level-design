
#ifndef VEHICLEFACTORY_HPP
#define VEHICLEFACTORY_HPP

#include <string>
#include "Vehicle.hpp"

class VehicleFactory {
    public:
        static Vehicle* createVehicle(std::string vehicleType, std::string licensePlate);
};

#endif