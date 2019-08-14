//
// Created by Mindaugas K on 8/15/2019.
//

#include "Fraction.h"
std::ostream& operator<<(std::ostream& out, const Fraction &f1)
{
    out << f1.m_numerator << "/" << f1.m_denominator;
    return out;
}