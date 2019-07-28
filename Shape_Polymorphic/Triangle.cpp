//
// Created by Mindaugas K on 7/28/2019.
//

#include "Triangle.h"
std::ostream& Triangle::print (std::ostream& out) const {
    out<<"Triangle("<<m_p1<<", "<<m_p2<<", "<<m_p3<<")";
    return  out;
}