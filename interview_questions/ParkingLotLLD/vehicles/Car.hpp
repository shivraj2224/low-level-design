
#ifndef CAR_HPP
#define CAR_HPP

#include "Vehicle.hpp"

class Car : public Vehicle{
    private:
        double Rate = 10.0;
    public:
        Car(std::string licensePlate);
        double calculateParkingFee(int hourStayed) override;
        virtual ~Car() = default;
};

#endif