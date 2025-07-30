#ifndef POINT_CPP
#define POINT_CPP

# include <string>
# include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point& point);
        Point& operator= (const Point &point);
        ~Point();

        Fixed getX();
        Fixed getY();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif