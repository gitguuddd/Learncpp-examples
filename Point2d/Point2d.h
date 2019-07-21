//
// Created by Mindaugas K on 7/21/2019.
//

#ifndef POINT2D_POINT2D_H
#define POINT2D_POINT2D_H
#include <iostream>

class Point2d {
private:
    double m_x;
    double m_y;
public:
    explicit Point2d(double x=0.0, double y=0.0)
        :m_x(x), m_y(y)
    {

    }
    void print();
    friend double distanceFrom(const Point2d &X, const Point2d &Y);
};


#endif //POINT2D_POINT2D_H
