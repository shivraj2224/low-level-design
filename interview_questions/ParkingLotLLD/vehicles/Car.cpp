
#include "Car.hpp"

Car::Car(std::string licensePlate){
    this->licensePlate = licensePlate;
    this->vehicleType = "Car";
}

double Car::calculateParkingFee(int hourStayed){
    return Rate * hourStayed;
}