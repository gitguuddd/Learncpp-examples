//
// Created by Mindaugas K on 7/22/2019.
//

#ifndef OVERLOADED_OPS_3_GRADEMAP_H
#define OVERLOADED_OPS_3_GRADEMAP_H
#include <string>
#include <vector>
struct StudentGrade{
    std::string name;
    char grade;
};
class GradeMap {
private:
    std::vector<StudentGrade> m_map;
public:
    GradeMap()=default;
    char& operator[](std::string ind);
};


#endif //OVERLOADED_OPS_3_GRADEMAP_H
