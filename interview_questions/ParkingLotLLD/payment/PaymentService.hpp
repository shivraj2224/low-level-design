
#ifndef PAYMENTSERVICE_HPP
#define PAYMENTSERVICE_HPP

#include <iostream>

class PaymentService {
public:
    void processPayment(double fee);
    void choosePaymentMethod(double fee);
};

#endif