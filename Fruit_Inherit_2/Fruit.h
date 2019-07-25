//
// Created by Mindaugas K on 7/25/2019.
//

#ifndef FRUIT_INHERIT_2_FRUIT_H
#define FRUIT_INHERIT_2_FRUIT_H

#include <string>

class Fruit {
private:
    std::string m_name;
    std::string m_color;
public:
    Fruit(std::string name, std::string color)
        :m_name(name), m_color(color)
    {}
    const std::string& getName();
    const std::string& getColor();
};


#endif //FRUIT_INHERIT_2_FRUIT_H
