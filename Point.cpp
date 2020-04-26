#include "Point.h"


class Point {
    private:

    int x;
    int y;
    double angle;

    public:

    Point::Point() {
        x = 0;
        y = 0;
        angle = -1;
    }

    Point::Point(int x, int y) {
        this->x = x;
        this->y = y;
        angle = -1;
    }

    int Point::getX() {
        return x;
    }

    int Point::getY() {
        return y;
    }

    int Point::getAngle() {
        return angle;
    }

    void Point::setAngle(double angle) {
        this->angle = angle;
    }

};
