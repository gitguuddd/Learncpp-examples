//
// Created by Mindaugas K on 8/14/2019.
//

#include "Fraction.h"
std::ostream& operator<<(std::ostream& out, const Fraction& f){
    out<<f.m_nominator<<"/"<<f.m_denominator;
    return out;
}