//
// Created by Mindaugas K on 7/23/2019.
//

#ifndef OVERLOADED_OPS_4_MYSTRING_H
#define OVERLOADED_OPS_4_MYSTRING_H
#include <string>

class MyString {
private:
std::string m_string;
public:
    explicit MyString(std::string s=""):m_string(s)
    {}
    std::string operator()(int i, int j);
};


#endif //OVERLOADED_OPS_4_MYSTRING_H
