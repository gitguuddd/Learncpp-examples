//
// Created by Mindaugas K on 7/26/2019.
//

#ifndef ANIMAL_INHERIT_CAT_H
#define ANIMAL_INHERIT_CAT_H

#include "Animal.h"

class Cat:public Animal {
public:
    Cat(const std::string& name)
        :Animal(name,"Meow")
    {}
};


#endif //ANIMAL_INHERIT_CAT_H
