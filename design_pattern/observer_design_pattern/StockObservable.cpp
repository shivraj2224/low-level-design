
#include "StockObservable.hpp"
#include <algorithm>

StockObservable::StockObservable(double price){
    this->price = price;
}

void StockObservable::addObserver(Observer* observer){
    observers.push_back(observer);
}

void StockObservable::removeObserver(Observer* observer){
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

void StockObservable::notifyObservers(){
    for(auto observer: observers){
        observer->update();
    }
}

void StockObservable::setPrice(double price){
    this->price = price;
    notifyObservers();
}

double StockObservable::getPrice(){
    return price;
}