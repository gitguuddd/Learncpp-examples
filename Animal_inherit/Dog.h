//
// Created by Mindaugas K on 7/26/2019.
//

#ifndef ANIMAL_INHERIT_DOG_H
#define ANIMAL_INHERIT_DOG_H

#include "Animal.h"

class Dog:public Animal{
public:
    Dog(const std::string& name)
        :Animal(name,"Woof")
    {}
};


#endif //ANIMAL_INHERIT_DOG_H
