
#include <iostream>
#include "VehicleFactory.hpp"

int main() {
    Vehicle* car = VehicleFactory::createVehicle("Car");
    car->drive();

    Vehicle* bike = VehicleFactory::createVehicle("Bike");
    bike->drive();

    Vehicle* bus = VehicleFactory::createVehicle("Bus");
    bus->drive();

    return 0;
}