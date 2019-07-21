//
// Created by Mindaugas K on 7/21/2019.
//
#ifndef FRIEND_FUNC_EXAMPLE_POINT3D_H
#define FRIEND_FUNC_EXAMPLE_POINT3D_H
#include <iostream>
class Vector3d;

class Point3d {
private:
    double m_x, m_y, m_z;
public:
   explicit Point3d(double x=0.0, double y=0.0, double z=0.0)
        : m_x(x), m_y(y), m_z(z)
    {

    }

    void print();

    void moveByVector(const Vector3d &v);
};


#endif //FRIEND_FUNC_EXAMPLE_POINT3D_H
