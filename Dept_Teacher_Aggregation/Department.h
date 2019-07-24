//
// Created by Mindaugas K on 7/24/2019.
//

#ifndef DEPT_TEACHER_AGGREGATION_DEPARTMENT_H
#define DEPT_TEACHER_AGGREGATION_DEPARTMENT_H

#include <vector>
#include <iostream>
class Teacher;
class Department {
private:
    std::vector<Teacher*> m_teachers;
public:
    void add(Teacher *t);
    friend std::ostream& operator<<(std::ostream& out, const Department &dept);
};


#endif //DEPT_TEACHER_AGGREGATION_DEPARTMENT_H
