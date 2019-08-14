//
// Created by Mindaugas K on 8/15/2019.
//

#ifndef FRACTION_UNIQUE_PTR_FRACTION_H
#define FRACTION_UNIQUE_PTR_FRACTION_H

#include <iostream>

class Fraction {

private:
    int m_numerator = 0;
    int m_denominator = 1;

public:
    explicit Fraction(int numerator = 0, int denominator = 1) :
            m_numerator(numerator), m_denominator(denominator)
    {
    }

    friend std::ostream& operator<<(std::ostream& out, const Fraction &f1);
};


#endif //FRACTION_UNIQUE_PTR_FRACTION_H
