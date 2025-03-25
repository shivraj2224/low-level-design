
#include "PaymentService.hpp"
#include "Payment.hpp"
#include "CashPayment.hpp"
#include "CreditCardPayment.hpp"
#include "UPIPayment.hpp"
#include <iostream>


void PaymentService::processPayment(double fee){
    choosePaymentMethod(fee);
}

void PaymentService::choosePaymentMethod(double fee){
    std::cout<<"Total Fee: "<<fee<<std::endl;
    std::cout<<"Choose Payment Method: "<<std::endl;
    std::cout<<"1. Credit Card"<<std::endl;
    std::cout<<"2. Cash"<<std::endl;
    std::cout<<"3. UPI"<<std::endl;

    int choice;
    std::cin>>choice;

    Payment* payment = nullptr;

    switch(choice){
        case 1:
            payment = new Payment(fee, new CreditCardPayment());
            break;
        case 2:
            payment = new Payment(fee, new CashPayment());
            break;
        case 3:
            payment = new Payment(fee, new UPIPayment());
            break;
        default:
            std::cout<<"Invalid Choice! Defaulting to Cash"<<std::endl;
            payment = new Payment(fee, new CashPayment());
            break;
    }

    if(payment != nullptr){
        payment->processPayment();
        delete payment;
    }

}