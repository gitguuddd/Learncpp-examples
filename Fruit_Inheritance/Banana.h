//
// Created by Mindaugas K on 7/24/2019.
//

#ifndef FRUIT_INHERITANCE_BANANA_H
#define FRUIT_INHERITANCE_BANANA_H
#include "Fruit.h"

class Banana: public Fruit {
public:
    Banana(std::string name, std::string color)
        :Fruit{name,color}
    {

    }
     friend std::ostream& operator<<(std::ostream &out, const Banana& b);
};



#endif //FRUIT_INHERITANCE_BANANA_H
