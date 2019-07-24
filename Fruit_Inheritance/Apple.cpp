//
// Created by Mindaugas K on 7/24/2019.
//

#include "Apple.h"
double Apple::getFiber () const{
    return m_fiber;
}
std::ostream& operator<<(std::ostream& out, const Apple &a){
    out<<"Apple("<<a.getName()<<", "<<a.getColor()<<", "<<a.getFiber()<<")\n";
    return out;
}