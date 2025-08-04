#include "../headers/Fixed.hpp"




Fixed::Fixed():_fixedPoint(0){

    std::cout << "default constructor called" << std::endl;
};

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout<<"copy constructor called"<<std::endl;
    this->operator=(other);
}
Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout<<"copy  assignment operator called"<<std::endl;
    if(this != &other)
    {
        this->_fixedPoint = other._fixedPoint;
    }
    this->getRawBits();

    return (*this);
}


void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPoint = raw;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPoint;
}


