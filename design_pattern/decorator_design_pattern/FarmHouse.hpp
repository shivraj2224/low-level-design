
#ifndef FARMHOUSE_HPP
#define FARMHOUSE_HPP

#include "BasePizza.hpp"

class FarmHouse : public BasePizza{
    public:
        double getCost() override;
        std::string getDescription() override;
};

#endif