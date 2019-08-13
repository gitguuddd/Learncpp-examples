//
// Created by Mindaugas K on 8/14/2019.
//

#ifndef SIMPLE_EXCEPTION_FRACTION_H
#define SIMPLE_EXCEPTION_FRACTION_H

#include <stdexcept>
#include <iostream>

class Fraction {
private:
    int m_nominator=0;
    int m_denominator=1;
public:
    explicit Fraction(int nominator=0, int denominator=1)
    :m_nominator{nominator},m_denominator{denominator}{
        if(m_denominator==0)
            throw std::runtime_error{"Invalid denominator"};
    }
    friend std::ostream& operator<<(std::ostream& out, const Fraction& f);
};



#endif //SIMPLE_EXCEPTION_FRACTION_H
