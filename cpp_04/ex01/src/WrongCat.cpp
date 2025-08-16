#include "../headers/WrongCat.hpp"

WrongCat::WrongCat(){
    this->type = "WrongCat";
    std::cout << "WrongCat constructor called " << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
    std::cout << "WrongCat copy constuctor called" << std::endl;
    this->type = other.type;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
    if(this != &other)
    {
        this->type = other.type;
        std::cout << "WrongCat copy assignement operator called" << std::endl;

    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout <<"WrongCat destructor called" <<std::endl;
}

void WrongCat::makeSound() const {
    std::cout <<"no Sound on this class" << std::endl;
}

std::string WrongCat::getType() const {return type;}