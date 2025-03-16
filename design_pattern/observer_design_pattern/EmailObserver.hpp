
#ifndef EMAIL_OBSERVER_HPP
#define EMAIL_OBSERVER_HPP

#include <string>
#include "StockObservable.hpp"

class EmailObserver: public Observer{
    private:
        std::string emailId; 
        StockObservable* stockObservable;

    public:
        EmailObserver(std::string emailId, StockObservable* stockObservable);
        void update() override;
};

#endif