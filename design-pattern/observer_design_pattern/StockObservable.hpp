
#ifndef STOCK_OBSERVABLE_HPP
#define STOCK_OBSERVABLE_HPP

#include "Observer.hpp"
#include <vector>

class StockObservable{
    private:
        std::vector<Observer*> observers;
        double price;

    public:
        StockObservable(double price);
        void addObserver(Observer* observer);
        void removeObserver(Observer* observer);
        void notifyObservers();
        void setPrice(double price);
        double getPrice();
};

#endif