
#include "VehicleFactory.hpp"
#include "Car.hpp"
#include "Bike.hpp"


Vehicle* VehicleFactory::createVehicle(std::string vehicleType, std::string licensePlate){
    if(vehicleType == "Car"){
        return new Car(licensePlate);
    } else if(vehicleType == "Bike"){
        return new Bike(licensePlate);
    } else {
        return nullptr;
    }
}