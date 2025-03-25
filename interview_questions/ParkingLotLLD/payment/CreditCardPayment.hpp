
#ifndef CREDIT_CARD_PAYMENT_HPP
#define CREDIT_CARD_PAYMENT_HPP

#include "PaymentStrategy.hpp"

class CreditCardPayment : public PaymentStrategy {
public:
    void processPayment(double amount) override;
};

#endif