
#ifndef CASHPAYMENT_HPP
#define CASHPAYMENT_HPP

#include "Strategy.hpp"

class CashPayment : public Strategy{
    public:
        void execute() override;
};

#endif