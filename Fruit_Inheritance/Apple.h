//
// Created by Mindaugas K on 7/24/2019.
//

#ifndef FRUIT_INHERITANCE_APPLE_H
#define FRUIT_INHERITANCE_APPLE_H
#include "Fruit.h"

class Apple: public Fruit  {
private:
    double m_fiber;
public:
    Apple(std::string name, std::string color, double f=0.0)
        :Fruit{name,color},m_fiber{f}
    {

    }
    friend std::ostream& operator<<(std::ostream& out, const Apple &a);
double getFiber () const;
};



#endif //FRUIT_INHERITANCE_APPLE_H
