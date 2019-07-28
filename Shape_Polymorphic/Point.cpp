//
// Created by Mindaugas K on 7/28/2019.
//

#include "Point.h"
std::ostream& operator<<(std::ostream &out, const Point &p)
{
out << "Point(" << p.m_x << ", " << p.m_y << ", " << p.m_z << ")";
return out;
}