
#ifndef PAYMENTSTRATEGY_HPP
#define PAYMENTSTRATEGY_HPP

#include <iostream>

class PaymentStrategy {
public:
    virtual void processPayment(double amount) = 0;
};

#endif 