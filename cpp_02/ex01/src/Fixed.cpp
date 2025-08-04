#include "../headers/Fixed.hpp"




Fixed::Fixed():_fixedPoint(0){

    std::cout << "Default constructor called" << std::endl;
};

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout<<"Copy constructor called"<<std::endl;
    this->operator=(other);
    
}
Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout<<"Copy  assignment operator called"<<std::endl;
    if(this != &other)
    {
        this->_fixedPoint = other._fixedPoint;
    }
    return (*this);
}
Fixed::Fixed(const float floatValue)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPoint = static_cast<int>(roundf(floatValue * (1 << _fraction)));
}

Fixed::Fixed(const int realValue)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPoint = realValue << _fraction;
}   


void Fixed::setRawBits(int const raw)
{
    std::cout << "SetRawBits member function called" << std::endl;
    this->_fixedPoint = raw;
}

int Fixed::getRawBits() const
{
    std::cout << "GetRawBits member function called" << std::endl;
    return this->_fixedPoint;
}

int Fixed::toInt(void) const
{
    // std::cout << "toInt member function called" << std::endl;
    // Convert the fixed-point value to integer
    return this->_fixedPoint >> _fraction;
}

float Fixed::toFloat(void) const
{
    // std::cout << "toFloat member function called" << std::endl;
    // Convert the fixed-point value to float
    return static_cast<float>(this->_fixedPoint) / (1 << _fraction);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}