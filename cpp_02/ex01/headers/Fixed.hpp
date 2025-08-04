#ifndef FIXEDPOINT
#define FIXEDPOINT


#include <string>
#include <iostream>
#include <math.h>

class Fixed{
    private:
        int _fixedPoint;
        static const int _fraction = 8;
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed(const int realValue);
        Fixed(const float floatValue);
        Fixed& operator=(const Fixed& other);
        ~Fixed();
        void setRawBits(int const raw);
        int getRawBits() const;
        float toFloat( void ) const;
        int toInt( void ) const;

};
std::ostream& operator<<(std::ostream &out, const Fixed &fixed);
#endif