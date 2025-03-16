
#include "ExtraCheese.hpp"

ExtraCheese::ExtraCheese(BasePizza* pizza) : PizzaDecorator(pizza){
    // this->pizza = pizza;
}

double ExtraCheese::getCost() {
    return pizza->getCost() + 50.0;
}

std::string ExtraCheese::getDescription() {
    return pizza->getDescription() + " with Extra Cheese";
}