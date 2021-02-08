#include "Point.hpp"
#include <cmath>

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

void Point::setX(double x)
{
    this->x = x;
}

void Point::setY(double y)
{
    this->y = y;
}

double Point::getX() { return this->x; }

double Point::getY() { return this->y; }

double Point::distance(Point *other)
{
    return sqrt(pow((other->x - this->x), 2.0) + pow((other->y - this->y), 2.0));
}