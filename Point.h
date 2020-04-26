#ifndef POINT_H
#define POINT_H

class Point {

private:

    int x;
    int y;
    double angle;

public:

    Point();
    Point(int x, int y);


    int getX();
    int getY();
    int getAngle();

    void setAngle(double angle);

};

#endif