
#ifndef EXTRAMUSHROOM_HPP
#define EXTRAMUSHROOM_HPP

#include "PizzaDecorator.hpp"

class ExtraMushroom : public PizzaDecorator {
    public:
        ExtraMushroom(BasePizza* pizza);
        double getCost() override;
        std::string getDescription() override;
};

#endif