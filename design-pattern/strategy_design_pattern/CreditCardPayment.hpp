
#ifndef CREDITCARDPAYMENT_HPP
#define CREDITCARDPAYMENT_HPP

#include "Strategy.hpp"

class CreditCardPayment : public Strategy{
    public:
        void execute() override;
};

#endif