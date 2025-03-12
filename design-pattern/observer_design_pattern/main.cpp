
#include "StockObservable.hpp"
#include "EmailObserver.hpp"
#include "SMSObserver.hpp"
#include<iostream>

int main(){
    StockObservable* stockObservable = new StockObservable(255.0);
    EmailObserver* emailObserver1 = new EmailObserver("shivrajhulwan7@gmail.com", stockObservable);
    EmailObserver* emailObserver2 = new EmailObserver("markzukerberg@facebook.com", stockObservable);
    SMSObserver* smsObserver = new SMSObserver("1234567890", stockObservable);

    stockObservable->addObserver(emailObserver1);
    stockObservable->addObserver(emailObserver2);
    stockObservable->addObserver(smsObserver);

    stockObservable->setPrice(260.0);
    stockObservable->setPrice(265.0);

    stockObservable->removeObserver(emailObserver2);
    stockObservable->setPrice(270.0);

    return 0;
}