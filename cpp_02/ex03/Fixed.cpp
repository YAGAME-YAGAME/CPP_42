#include "Fixed.hpp"


Fixed::Fixed():_value(0){

    // std::cout << "default constructor called" << std::endl;
};

Fixed::~Fixed(){
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    // std::cout<<"copy constructor called"<<std::endl;
    this->operator=(other);
    
}

Fixed& Fixed::operator=(const Fixed& other)
{
    // std::cout<<"copy  assignment operator called"<<std::endl;
    if(this != &other)
    {
        this->_value = other._value;
    }
    return (*this);
}

Fixed::Fixed(const float floatValue)
{
    // std::cout << "float constructor called" << std::endl;
    this->_value = static_cast<int>(roundf(floatValue * (1 << _fraction)));
}

Fixed::Fixed(const int realValue)
{
    // std::cout << "int constructor called" << std::endl;
    this->_value = realValue << _fraction;
}   


void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

int Fixed::getRawBits() const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

int Fixed::toInt(void) const
{
    // Convert the fixed-point value to integer
    return this->_value >> _fraction;
}

float Fixed::toFloat(void) const
{
    // Convert the fixed-point value to float
    return static_cast<float>(this->_value) / (1 << _fraction);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

//The 6 comparison operators: >, <, >=, <=, ==, and !=.
bool Fixed::operator>(const Fixed &other) const
{
    return (this->_value > other._value);
}

bool Fixed::operator<(const Fixed &other) const
{
    return (this->_value < other._value);
}

bool Fixed::operator>=(const Fixed &other) const
{
    return (this->_value >= other._value);
}

bool Fixed::operator<=(const Fixed &other) const
{
    return (this->_value <= other._value);
}
bool Fixed::operator==(const Fixed &other) const
{
    return (this->_value == other._value);
}
bool Fixed::operator!=(const Fixed &other) const
{
    return (this->_value != other._value);
}


 // • The 4 arithmetic operators: +, -, *, and /.

Fixed Fixed::operator+(const Fixed &other) const{
    Fixed temp(this->_value + other._value);
    return temp;
}

Fixed Fixed::operator-(const Fixed &other) const{
    Fixed temp(this->_value - other._value);
    return temp;
}

Fixed Fixed::operator*(const Fixed &other) const{
    Fixed temp;
    long long re = static_cast<long long>(this->_value) * other._value;
    temp._value = static_cast<int>(re/( 1<< _fraction));
    return temp;
}

Fixed Fixed::operator/(const Fixed &other) const{
    Fixed temp;
    long long re = static_cast<long long>(this->_value) * (1 << _fraction);
    temp._value = static_cast<int>(re/ other._value);
    return temp;
}

// • The increment and decrement operators: ++ and --.

Fixed& Fixed::operator++()
{
    ++(this->_value);
    return *this;
}

Fixed& Fixed::operator--()
{
    --(this->_value);
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    ++(this->_value);
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    --(this->_value);
    return temp;
}


// static member function 

Fixed& Fixed::min(Fixed& f, Fixed& s)
{
    return (f < s) ? f : s;
}
const Fixed& Fixed::min(const Fixed& f,const Fixed& s)
{
    return (f < s) ? f : s;
}

Fixed& Fixed::max(Fixed& f, Fixed& s)
{
    return (f > s) ? f : s;
}
const Fixed& Fixed::max(const Fixed& f,const Fixed& s)
{
    return (f > s) ? f : s;
}