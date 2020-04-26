#include "Point.h"

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

Point getLowestCoordinate(vector<Point> &vec);
void sortPointsByAngle(vector<Point> &vec, Point lowest);
bool comparator(Point &p, Point &q);

int main() {

}

Point getLowestCoordinate(vector<Point> &vec) {
    Point lowest = vec[0];

    // scan for lowest Y coordinate
    // if more than one exists, get lowest X coordinate
    for (int i = 1; i < vec.size(); i++) {
        Point point = vec[i];

        if (point.getY() < lowest.getY()) {
            lowest = point;
        }

        else if (point.getY() == lowest.getY()) {
            if (point.getX() < lowest.getX()) {
                lowest = point;
            }
        }

    }


    return lowest;
}

void sortPointsByAngle(vector<Point> &vec, Point lowest) {
    for (int i = 0; i < vec.size(); i++) {
        Point point = vec[i];

        if (!(lowest.getX() == point.getX() && lowest.getY() == point.getY())) {
            double xCoord = point.getX() - lowest.getX();
            double yCoord = point.getY() - lowest.getY();

            point.setAngle(atan2(yCoord, xCoord));

        }
    }

    std::sort(vec.begin(), vec.end(), &comparator);

}

bool comparator(Point &p, Point &q) {
        return p.getAngle < q.getAngle;

}



