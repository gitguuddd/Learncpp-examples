//
// Created by Mindaugas K on 7/25/2019.
//

#ifndef FRUIT_INHERIT_2_BANANA_H
#define FRUIT_INHERIT_2_BANANA_H

#include "Fruit.h"

class Banana: public Fruit {
public:
    explicit Banana(std::string color="yellow")
        :Fruit("Banana", color)
    {}
};


#endif //FRUIT_INHERIT_2_BANANA_H
