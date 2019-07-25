//
// Created by Mindaugas K on 7/25/2019.
//

#ifndef FRUIT_INHERIT_2_APPLE_H
#define FRUIT_INHERIT_2_APPLE_H

#include "Fruit.h"

class Apple: public Fruit {
public:
    explicit Apple(std::string color="red")
        :Fruit("Apple",color)
    {}

protected:
    explicit Apple(std::string name, std::string color)
        :Fruit(name,color)
    {}
};


#endif //FRUIT_INHERIT_2_APPLE_H
