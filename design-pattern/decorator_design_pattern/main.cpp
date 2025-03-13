
#include <iostream>
#include "FarmHouse.hpp"
#include "VegDelight.hpp"
#include "ExtraCheese.hpp"
#include "ExtraMushroom.hpp"

int main() {
    BasePizza* pizza = new FarmHouse();
    std::cout << "Cost: " << pizza->getCost() << std::endl;
    std::cout << "Description: " << pizza->getDescription() << std::endl;

    pizza = new ExtraCheese(pizza);
    std::cout << "Cost: " << pizza->getCost() << std::endl;
    std::cout << "Description: " << pizza->getDescription() << std::endl;

    pizza = new ExtraMushroom(pizza);
    std::cout << "Cost: " << pizza->getCost() << std::endl;
    std::cout << "Description: " << pizza->getDescription() << std::endl;

    pizza = new VegDelight();
    std::cout << "Cost: " << pizza->getCost() << std::endl;
    std::cout << "Description: " << pizza->getDescription() << std::endl;

    pizza = new ExtraMushroom(pizza);
    std::cout << "Cost: " << pizza->getCost() << std::endl;
    std::cout << "Description: " << pizza->getDescription() << std::endl;

    pizza = new ExtraCheese(pizza);
    std::cout << "Cost: " << pizza->getCost() << std::endl;
    std::cout << "Description: " << pizza->getDescription() << std::endl;

    return 0;
}