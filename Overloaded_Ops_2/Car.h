//
// Created by Mindaugas K on 7/22/2019.
//

#ifndef OVERLOADED_OPS_2_CAR_H
#define OVERLOADED_OPS_2_CAR_H

#include <iostream>
#include <string>

class Car
{
private:
    std::string m_make;
    std::string m_model;

public:
    Car(std::string make, std::string model)
            : m_make(make), m_model(model)
    {
    }

    friend bool operator== (const Car &c1, const Car &c2);
    friend bool operator!= (const Car &c1, const Car &c2);
    friend bool operator<(const Car &c1, const Car &c2);
    friend std::ostream& operator <<(std::ostream& out, const Car &c);
};

#endif //OVERLOADED_OPS_2_CAR_H
