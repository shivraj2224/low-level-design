
#ifndef PAYMENTPROCESSOR_HPP
#define PAYMENTPROCESSOR_HPP

#include "Strategy.hpp"

class PaymentProcessor{
    private:
        Strategy* strategy;
    
    public:
        PaymentProcessor(Strategy* strategy);
        void setStrategy(Strategy* strategy);
        void executeStrategy();
};

#endif  