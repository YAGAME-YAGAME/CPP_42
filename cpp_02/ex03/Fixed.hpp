#ifndef FIXEDPOINT
#define FIXEDPOINT



#include <string>
#include <iostream>
#include <math.h>

class Fixed{
    private:
        int _value;
        static const int _fraction = 8;
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed(const int realValue);
        Fixed(const float floatValue);
        ~Fixed();
        Fixed& operator=(const Fixed& other);
        //The 6 comparison operators: >, <, >=, <=, ==, and !=.
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;

        // • The 4 arithmetic operators: +, -, *, and /.
        Fixed operator+(const Fixed &other) const ;
        Fixed operator-(const Fixed &other) const ;
        Fixed operator*(const Fixed &othe) const ;
        Fixed operator/(const Fixed &other) const ;

        // • The increment and decrement operators: ++ and --.
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
        
        // static member function 
        static Fixed& min(Fixed& f, Fixed& s);
        static const Fixed& min(const Fixed& f, const Fixed& s);
        static Fixed& max(Fixed& f, Fixed& s);
        static const Fixed& max(const Fixed& f, const Fixed& s);
        
        void setRawBits(int const raw);
        int getRawBits() const;
        float toFloat( void ) const;
        int toInt( void ) const;

};
std::ostream& operator<<(std::ostream &out, const Fixed &fixed);
#endif