
#ifndef SMSObserver_hpp
#define SMSObserver_hpp

#include <string>
#include "StockObservable.hpp"

class SMSObserver: public Observer{
    private:
        std::string phoneNumber;
        StockObservable* stockObservable;

    public:
        SMSObserver(std::string phoneNumber, StockObservable* stockObservable);
        void update() override;
};

#endif
