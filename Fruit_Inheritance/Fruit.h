//
// Created by Mindaugas K on 7/24/2019.
//

#ifndef FRUIT_INHERITANCE_FRUIT_H
#define FRUIT_INHERITANCE_FRUIT_H

#include <string>
#include <iostream>

class Fruit {
private:
    std::string m_name;
    std::string m_color;
public:
    Fruit(std::string name, std::string color):
        m_name{name},m_color{color}
    {}
    const std::string& getName ()const;
    const std::string& getColor ()const;

};


#endif //FRUIT_INHERITANCE_FRUIT_H
