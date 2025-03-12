
#include "SMSObserver.hpp"
#include <iostream>

SMSObserver::SMSObserver(std::string phoneNumber, StockObservable* stockObservable){
    this->phoneNumber = phoneNumber;
    this->stockObservable = stockObservable;
    // stockObservable->addObserver(this);
}

void SMSObserver::update(){
    std::cout << "SMS sent to " << this->phoneNumber << " with updated price: " << this->stockObservable->getPrice() << std::endl;
}