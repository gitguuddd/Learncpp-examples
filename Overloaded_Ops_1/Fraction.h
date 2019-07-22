//
// Created by Mindaugas K on 7/22/2019.
//

#ifndef OVERLOADED_OPS_1_FRACTION_H
#define OVERLOADED_OPS_1_FRACTION_H
#include <iostream>
#include <cassert>

class Fraction {
private:
    int m_num;
    int m_denom;
public:
    static int gcd(int a, int b);
    void reduce();
    explicit Fraction(int x=0, int y=1):m_num(x),m_denom(y)
    {   assert(y!=0&&"Denominator cannot be 0");
        reduce();}
    friend Fraction operator*(const Fraction &f1, const Fraction &f2);
    friend Fraction operator*(int value, const Fraction &f);
    friend Fraction operator*(const Fraction &f, int value);
    friend std::ostream& operator<<(std::ostream &out, const Fraction &f);
    friend std::istream& operator>>(std::istream &in,  Fraction &f);
};


#endif //OVERLOADED_OPS_1_FRACTION_H
