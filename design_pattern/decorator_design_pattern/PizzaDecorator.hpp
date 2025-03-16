
#ifndef PIZZADECORATOR_HPP
#define PIZZADECORATOR_HPP

#include "BasePizza.hpp"

class PizzaDecorator : public BasePizza {
    protected:
        BasePizza* pizza;
    public:
        PizzaDecorator(BasePizza* pizza);

        double getCost() override;
        std::string getDescription() override;

        virtual ~PizzaDecorator() = default;
};

#endif