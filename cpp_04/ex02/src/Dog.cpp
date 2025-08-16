#include "../headers/Dog.hpp"
#include <iostream>

Dog::Dog(): Animal(){
    this->type = "Dog";
    brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& copy){
    if(this != &copy)
    {
        Animal::operator=(copy);
        delete brain;
        brain = new Brain(*copy.brain);
        this->type = copy.type;
        std::cout << "Dog assignment operator called" << std::endl;
    }
    return *this;
}

Dog::Dog(const Dog& other): Animal(other){
    brain = new Brain(*other.brain);
    type = other.type;
    std::cout << "Dog copy constructor called" << std::endl;}

void Dog::makeSound() const{
    std::cout<< "Woof Woof " <<std::endl;
}

std::string Dog::getType() const { return type;}


Dog::~Dog(){
    delete brain;
    std::cout<<"Dog destructor called "<< std::endl;
}