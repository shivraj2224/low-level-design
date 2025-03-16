
#include <iostream>
#include "PaymentProcessor.hpp"

PaymentProcessor::PaymentProcessor(Strategy* strategy){
    this->strategy = strategy;
}

void PaymentProcessor::setStrategy(Strategy* strategy){
    this->strategy = strategy;
}

void PaymentProcessor::executeStrategy(){
    if(this->strategy){
        this->strategy->execute();
    }else{
        std::cout<<"No Payment strategy set"<<std::endl;
    }
}