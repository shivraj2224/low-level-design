
#ifndef BIKE_HPP
#define BIKE_HPP

#include "Vehicle.hpp"

class Bike : public Vehicle{
    private:
        double Rate = 5.0;
    public:
        Bike(std::string licensePlate);
        double calculateParkingFee(int hourStayed) override;
        virtual ~Bike() = default;
};

#endif