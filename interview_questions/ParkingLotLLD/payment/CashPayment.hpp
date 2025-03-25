
#ifndef CASH_PAYMENT_HPP
#define CASH_PAYMENT_HPP

#include "PaymentStrategy.hpp"

class CashPayment : public PaymentStrategy {
    public:
        void processPayment(double amount) override;
};

#endif