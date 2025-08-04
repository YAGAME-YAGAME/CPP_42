#include "../headers/Fixed.hpp"
#include "../headers/Point.hpp"

Point::Point():x(0), y(0){};

Point::Point(const float x, const float y):x(x), y(y){};

Point::~Point(){};

Point& Point::operator=(const Point &point)
{
    (void)point;
    return *this;
}

Point::Point(const Point &point): x(point.x), y(point.y){};


Fixed Point::getX() const{
    return x;
}
Fixed Point::getY() const{
    return y;
}

