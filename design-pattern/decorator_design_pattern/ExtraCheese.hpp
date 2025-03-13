
#ifndef EXTRA_CHEESE_HPP
#define EXTRA_CHEESE_HPP

#include "PizzaDecorator.hpp"

class ExtraCheese : public PizzaDecorator {
    public:
        ExtraCheese(BasePizza* pizza);
        double getCost() override;
        std::string getDescription() override;
};

#endif