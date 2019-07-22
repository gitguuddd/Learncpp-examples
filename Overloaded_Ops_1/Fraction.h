//
// Created by Mindaugas K on 7/22/2019.
//

#ifndef OVERLOADED_OPS_1_FRACTION_H
#define OVERLOADED_OPS_1_FRACTION_H
#include <iostream>

class Fraction {
private:
    int m_num;
    int m_denom;
public:
    int gcd(int a, int b);
    void reduce();
    Fraction(int x, int y):m_num(x),m_denom(y)
    {reduce();}
    void print();
    friend Fraction operator*(const Fraction &f1, const Fraction &f2);
    friend Fraction operator*(int value, const Fraction &f);
    friend Fraction operator*(const Fraction &f, int value);
};


#endif //OVERLOADED_OPS_1_FRACTION_H
