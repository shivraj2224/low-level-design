
#include "Bike.hpp"

Bike::Bike(std::string licensePlate){
    this->licensePlate = licensePlate;
    this->vehicleType = "Bike";
}

double Bike::calculateParkingFee(int hourStayed){
    return Rate * hourStayed;
}