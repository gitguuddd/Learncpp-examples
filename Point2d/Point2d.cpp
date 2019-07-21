//
// Created by Mindaugas K on 7/21/2019.
//

#include "Point2d.h"
#include "cmath"
void Point2d::print() {
    std::cout<<"Point2d("<<m_x<<", "<<m_y<<")\n";
}
double distanceFrom(const Point2d &X, const Point2d &Y){
    return sqrt(pow(X.m_x-Y.m_x,2)+pow(X.m_y-Y.m_y,2));
}