#include "../headers/Cat.hpp"
#include "../headers/Brain.hpp"
#include <iostream>

Cat::Cat(): Animal(){
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat constructor called"<< std::endl;
}

Cat::~Cat(){
    delete brain;
    std::cout <<"Cat destructor called"<< std::endl;
}
// copy constructor
Cat::Cat(const Cat& other):Animal(other){
    brain = new Brain(*other.brain);
    type = other.type;
    std::cout << "Cat copy constructor called" << std::endl;
}

// copy assignemet operator 
Cat& Cat::operator=(const Cat& copy){
    if(this != &copy)
    {
        Animal::operator=(copy);
        delete brain;
        brain = new Brain(*copy.brain);
        this->type = copy.type;
        std::cout << "Cat copy assignemet operator called"<< std::endl;
    }
    return *this;
}


void Cat::makeSound() const{
    std::cout<< "Meow Meow " <<std::endl;
}

// std::string Cat::getType() const { return type;}
