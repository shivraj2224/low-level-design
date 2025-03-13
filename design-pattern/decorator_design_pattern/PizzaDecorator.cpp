
#include "PizzaDecorator.hpp"

PizzaDecorator::PizzaDecorator(BasePizza* pizza) {
    this->pizza = pizza;
}

double PizzaDecorator::getCost() {
    return pizza->getCost();
}

std::string PizzaDecorator::getDescription() {
    return pizza->getDescription();
}

