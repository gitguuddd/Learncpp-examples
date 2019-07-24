//
// Created by Mindaugas K on 7/24/2019.
//

#include "Department.h"
#include "Teacher.h"
void Department::add(Teacher *t ){
    m_teachers.push_back(t);
}
std::ostream& operator<<(std::ostream &out, const Department &dept) {
    out<<"Department: ";
    for(auto &element:dept.m_teachers){
        out<<a->getName()<<" ";
    }
    out<<"\n";
    return out;
}