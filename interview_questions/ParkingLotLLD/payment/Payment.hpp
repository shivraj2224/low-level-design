
#ifndef PAYMENT_HPP
#define PAYMENT_HPP
#include "PaymentStrategy.hpp"
#include <iostream>

class Payment {
    private:
        double amount;
        PaymentStrategy* paymentStrategy;

    public:
        Payment(double amount, PaymentStrategy* paymentStrategy);
        void processPayment();
    
};

#endif