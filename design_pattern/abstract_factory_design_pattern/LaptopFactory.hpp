
#ifndef LAPTOPFACTORY_HPP
#define LAPTOPFACTORY_HPP

#include <string>
#include "Laptop.hpp"

class LaptopFactory {
    public:
        Laptop* createLaptop(std::string laptopType);
        virtual ~LaptopFactory() = default;
};

#endif