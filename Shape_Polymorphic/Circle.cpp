//
// Created by Mindaugas K on 7/28/2019.
//

#include "Circle.h"
std::ostream& Circle::print(std::ostream& out)const{
    out<<"Circle("<<m_pCenter<<", radius "<<m_radius<<")";
    return out;
}
int Circle::getRadius(){
    return m_radius;
}