//
// Created by Mindaugas K on 7/26/2019.
//

#ifndef ANIMAL_INHERIT_ANIMAL_H
#define ANIMAL_INHERIT_ANIMAL_H


#include <string>

class Animal {
protected:
    std::string m_name;
    std::string m_speak;
    Animal(const std::string &name, const std::string &speak)
        :m_name{name}, m_speak{speak}
    {}

public:
    Animal(const Animal&) = delete; // to prevent shallow copies
    Animal& operator=(const Animal&) = delete; // to prevent shallow copies
    const std::string& getName();
    const std::string& speak();
};


#endif //ANIMAL_INHERIT_ANIMAL_H
