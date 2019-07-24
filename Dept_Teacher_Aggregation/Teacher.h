//
// Created by Mindaugas K on 7/24/2019.
//

#ifndef DEPT_TEACHER_AGGREGATION_TEACHER_H
#define DEPT_TEACHER_AGGREGATION_TEACHER_H

#include <string>

class Teacher {
private:
    std::string m_name;
public:
    explicit Teacher(std::string name)
        : m_name(name){

    }
    std::string getName();
};


#endif //DEPT_TEACHER_AGGREGATION_TEACHER_H
