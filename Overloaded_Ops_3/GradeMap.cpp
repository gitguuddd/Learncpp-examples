//
// Created by Mindaugas K on 7/22/2019.
//

#include "GradeMap.h"
char& GradeMap::operator[](std::string ind){
    for(auto &el:m_map)
        if(el.name==ind)
            return el.grade;
    StudentGrade temp{ind,' '};
    m_map.push_back(temp);
    return m_map.back().grade;
}