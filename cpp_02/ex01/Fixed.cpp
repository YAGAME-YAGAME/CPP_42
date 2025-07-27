#include "Fixed.hpp"




Fixed::Fixed():_value(0){

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
        this->_value = other._value;
    }
    return (*this);
}
Fixed::Fixed(const float floatValue)
{
    std::cout << "float constructor called" << std::endl;
    this->_value = static_cast<int>(roundf(floatValue * (1 << _fraction)));
}

Fixed::Fixed(const int realValue)
{
    std::cout << "int constructor called" << std::endl;
    this->_value = realValue << _fraction;
}   


void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

int Fixed::toInt(void) const
{
    // std::cout << "toInt member function called" << std::endl;
    // Convert the fixed-point value to integer
    return this->_value >> _fraction;
}

float Fixed::toFloat(void) const
{
    // std::cout << "toFloat member function called" << std::endl;
    // Convert the fixed-point value to float
    return static_cast<float>(this->_value) / (1 << _fraction);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}