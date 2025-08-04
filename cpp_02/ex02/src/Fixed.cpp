#include "../headers/Fixed.hpp"


Fixed::Fixed():_fixedPoint(0){};

Fixed::~Fixed(){}

Fixed::Fixed(const Fixed& other)
{
    this->operator=(other);
    
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if(this != &other)
    {
        this->_fixedPoint = other._fixedPoint;
    }
    return (*this);
}

Fixed::Fixed(const float floatValue)
{
    this->_fixedPoint = static_cast<int>(roundf(floatValue * (1 << _fraction)));
}

Fixed::Fixed(const int realValue)
{
    this->_fixedPoint = realValue << _fraction;
}   


void Fixed::setRawBits(int const raw)
{
    this->_fixedPoint = raw;
}

int Fixed::getRawBits() const
{
    return this->_fixedPoint;
}

int Fixed::toInt(void) const
{
    return this->_fixedPoint >> _fraction;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->_fixedPoint) / (1 << _fraction);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

//The 6 comparison operators: >, <, >=, <=, ==, and !=.
bool Fixed::operator>(const Fixed &other) const
{
    return (this->_fixedPoint > other._fixedPoint);
}

bool Fixed::operator<(const Fixed &other) const
{
    return (this->_fixedPoint < other._fixedPoint);
}

bool Fixed::operator>=(const Fixed &other) const
{
    return (this->_fixedPoint >= other._fixedPoint);
}

bool Fixed::operator<=(const Fixed &other) const
{
    return (this->_fixedPoint <= other._fixedPoint);
}
bool Fixed::operator==(const Fixed &other) const
{
    return (this->_fixedPoint == other._fixedPoint);
}
bool Fixed::operator!=(const Fixed &other) const
{
    return (this->_fixedPoint != other._fixedPoint);
}


 // • The 4 arithmetic operators: +, -, *, and /.

Fixed Fixed::operator+(const Fixed &other) const{
    Fixed temp(this->_fixedPoint + other._fixedPoint);
    return temp;
}

Fixed Fixed::operator-(const Fixed &other) const{
    Fixed temp(this->_fixedPoint - other._fixedPoint);
    return temp;
}

Fixed Fixed::operator*(const Fixed &other) const{
    Fixed temp;
    long long re = static_cast<long long>(this->_fixedPoint) * other._fixedPoint;
    temp._fixedPoint = static_cast<int>(re/( 1<< _fraction));
    return temp;
}

Fixed Fixed::operator/(const Fixed &other) const{
    Fixed temp;
    long long re = static_cast<long long>(this->_fixedPoint) * (1 << _fraction);
    temp._fixedPoint = static_cast<int>(re/ other._fixedPoint);
    return temp;
}

// • The increment and decrement operators: ++ and --.

Fixed& Fixed::operator++()
{
    ++(this->_fixedPoint);
    return *this;
}

Fixed& Fixed::operator--()
{
    --(this->_fixedPoint);
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    ++(this->_fixedPoint);
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    --(this->_fixedPoint);
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