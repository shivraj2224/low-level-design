
#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <string>

class Vehicle{
    protected:
        std::string licensePlate;
        std::string vehicleType;
    
    public:

        std::string getLicensePlate(){
            return licensePlate;
        }

        std::string getVehicleType(){
            return vehicleType;
        }

        virtual double calculateParkingFee(int hourStayed) = 0;

        virtual ~Vehicle() = default;
};

#endif