#ifndef FIXEDPOINT
#define FIXEDPOINT


#include <string>
#include <iostream>

class Fixed{
    private:
        int _fixedPoint;
        static const int _fraction = 8;
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed& operator=(const Fixed& other);
        ~Fixed();
        void setRawBits(int const raw);
        int getRawBits() const;

};
#endif