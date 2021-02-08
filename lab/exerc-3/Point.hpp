#ifndef POINT_HPP
#define POINT_HPP

class Point {
public:
    Point(double x, double y);

    void setX(double x);
    void setY(double y);

    double getX();
    double getY();

    double distance(Point *other);

private:
    double x;
    double y;
};

#endif