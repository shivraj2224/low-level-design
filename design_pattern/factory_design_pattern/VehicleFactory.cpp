
#include "VehicleFactory.hpp"
#include "Car.hpp"
#include "Bike.hpp"
#include "Bus.hpp"


Vehicle* VehicleFactory::createVehicle(std::string type){
    if(type == "Car"){
        return new Car();
    } else if(type == "Bike"){
        return new Bike();
    } else if(type == "Bus"){
        return new Bus();
    } else {
        return nullptr;
    }
}