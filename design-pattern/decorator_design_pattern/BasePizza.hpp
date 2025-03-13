
#ifndef BASEPIZZA_HPP
#define BASEPIZZA_HPP
#include <string>

class BasePizza {
public:
    virtual double getCost() = 0;
    virtual std::string getDescription() = 0;
    virtual ~BasePizza() = default;
};

#endif 