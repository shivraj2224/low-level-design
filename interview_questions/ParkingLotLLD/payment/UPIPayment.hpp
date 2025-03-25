
#ifndef UPI_PAYMENT_HPP
#define UPI_PAYMENT_HPP

#include "PaymentStrategy.hpp"

class UPIPayment : public PaymentStrategy {
public:
    void processPayment(double amount) override;
};

#endif