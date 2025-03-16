
#include "ExtraMushroom.hpp"

ExtraMushroom::ExtraMushroom(BasePizza* pizza) : PizzaDecorator(pizza){
    // this->pizza = pizza;
}

double ExtraMushroom::getCost() {
    return pizza->getCost() + 30.0;
}

std::string ExtraMushroom::getDescription() {
    return pizza->getDescription() + " with Extra Mushroom";
}