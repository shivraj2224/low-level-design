
#ifndef VEGDELIGHT_HPP
#define VEGDELIGHT_HPP

#include "BasePizza.hpp"

class VegDelight : public BasePizza {
    public:
        double getCost() override;
        std::string getDescription() override;
};

#endif