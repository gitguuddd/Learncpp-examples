//
// Created by Mindaugas K on 7/28/2019.
//

#ifndef SHAPE_POLYMORPHIC_POINT_H
#define SHAPE_POLYMORPHIC_POINT_H

#include <iostream>

class Point {

private:
    int m_x = 0;
    int m_y = 0;
    int m_z = 0;

public:
    Point(int x, int y, int z)
        : m_x(x), m_y(y), m_z(z)
        {

        }
        friend std::ostream& operator<<(std::ostream &out, const Point &p);

};


#endif //SHAPE_POLYMORPHIC_POINT_H
