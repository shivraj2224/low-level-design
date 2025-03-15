
#include "LaptopFactory.hpp"
#include "Windows.hpp"
#include "Mac.hpp"

Laptop* LaptopFactory::createLaptop(std::string laptopType){

    if(laptopType == "Windows"){
        return new Windows();
    } else if(laptopType == "Mac"){
        return new Mac();
    } else {
        return nullptr;
    }
}
