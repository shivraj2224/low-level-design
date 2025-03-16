
#ifndef UPIPAYMENT_HPP
#define UPIPAYMENT_HPP

#include "Strategy.hpp"

class UPIPayment : public Strategy{
    public:
        void execute() override;
};

#endif