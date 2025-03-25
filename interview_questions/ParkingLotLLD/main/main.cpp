
#include <iostream>
#include "../vehicles/VehicleFactory.hpp"
#include "../payment/PaymentService.hpp"


int main(){
    // Vehicle* car = VehicleFactory::createVehicle("Car", "1234");
    // Vehicle* bike = VehicleFactory::createVehicle("Bike", "5678");

    // std::cout << "Car License Plate: " << car->getLicensePlate() << std::endl;
    // std::cout << "Car Vehicle Type: " << car->getVehicleType() << std::endl;
    // std::cout << "Car Parking Fee: " << car->calculateParkingFee(2) << std::endl;
    // std::cout << "Bike License Plate: " << bike->getLicensePlate() << std::endl;
    // std::cout << "Bike Vehicle Type: " << bike->getVehicleType() << std::endl;
    // std::cout << "Bike Parking Fee: " << bike->calculateParkingFee(3) << std::endl;

    PaymentService paymentService;
    paymentService.processPayment(100);

    return 0;
}