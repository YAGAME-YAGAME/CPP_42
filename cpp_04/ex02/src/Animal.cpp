#include "../headers/Animal.hpp"
#include <iostream>



Animal::Animal(): type("Animal"){
    std::cout<<"Animal constructor called "<<std::endl;
}

Animal::Animal(const Animal &copy)
{
    type = copy.type;
}
Animal& Animal::operator=(const Animal& copy){
    if(this != &copy)
    {
        type = copy.type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout<< "Animal destructor called "<<std::endl;
}

std::string Animal::getType() const { return type;}



