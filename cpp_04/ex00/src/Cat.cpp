#include "../headers/Cat.hpp"
#include <iostream>

Cat::Cat(): Animal(){
    type = "Cat";
    std::cout << "Cat constructor called"<< std::endl;
}

Cat::~Cat(){
    std::cout <<"Cat destructor called"<< std::endl;
}

Cat& Cat::operator=(const Cat& copy){
    if(this != &copy)
    {
        type = copy.type;
    }
    return *this;
}

Cat::Cat(const Cat& other){
    type = other.type;
    std::cout << "Cat copy constructor called" << std::endl;
}

void Cat::makeSound() const{
    std::cout<< "Meow Meow " <<std::endl;
}

std::string Cat::getType() const { return type;}
