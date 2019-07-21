//
// Created by Mindaugas K on 7/21/2019.
//

#ifndef FRIEND_FUNC_EXAMPLE_VECTOR3D_H
#define FRIEND_FUNC_EXAMPLE_VECTOR3D_H
#include <iostream>
#include "Point3d.h"
class Vector3d {
private:
    double m_x, m_y, m_z;

public:
    explicit Vector3d(double x=0.0, double y=0.0, double z=0.0)
        :m_x(x), m_y(y), m_z(z)
    {

    }

    void print();
    friend void Point3d::moveByVector(const Vector3d &v);
};


#endif //FRIEND_FUNC_EXAMPLE_VECTOR3D_H
