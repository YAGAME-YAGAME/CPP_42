#include "../headers/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal constructor called " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal copy constuctor called" << std::endl;
    this->type = other.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    if(this != &other)
    {
        this->type = other.type;
        std::cout << "WrongAnimal copy assignement operator called" << std::endl;

    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout <<"WrongAnimal destructor called" <<std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout <<"no Sound on this class" << std::endl;
}

std::string WrongAnimal::getType() const {return type;}