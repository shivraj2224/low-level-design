
#include <iostream>
#include "LaptopFactory.hpp"

int main(){
    LaptopFactory* factory = new LaptopFactory();
    Laptop* laptop = factory->createLaptop("Windows");
    laptop->getOS()->info();
    laptop->getGPU()->info();

    laptop = factory->createLaptop("Mac");
    laptop->getOS()->info();
    laptop->getGPU()->info();

    delete laptop;
    delete factory;
    
    return 0;
}