
#include "EmailObserver.hpp"
#include <iostream>

EmailObserver::EmailObserver(std::string emailId, StockObservable* stockObservable){
    this->emailId = emailId;
    this->stockObservable = stockObservable;
}

void EmailObserver::update(){
    std::cout << "Email sent to " << this->emailId << " with updated price: " << stockObservable->getPrice() << std::endl;
}