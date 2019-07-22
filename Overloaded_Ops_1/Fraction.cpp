//
// Created by Mindaugas K on 7/22/2019.
//
#include "Fraction.h"
int Fraction::gcd(int a, int b) {
    return (b==0)?(a>0?a:-a):gcd(b,a%b);
}
void Fraction::reduce() {
    int t_gcd=gcd(m_num,m_denom);
    m_num/=t_gcd;
    m_denom/=t_gcd;

}
Fraction operator*(const Fraction &f1, const Fraction &f2){
    return Fraction{f1.m_num*f2.m_num,f1.m_denom*f2.m_denom};
}
Fraction operator*(int value, const Fraction &f){
    return Fraction{value*f.m_num,f.m_denom};
}
Fraction operator*(const Fraction &f, int value){
    return Fraction{value*f.m_num,f.m_denom};
}
std::ostream& operator<<(std::ostream &out, const Fraction &f){
    out<<f.m_num<<"/"<<f.m_denom;
    return out;
}
std::istream& operator>>(std::istream &in, Fraction &f){
    char t_c;
    in>>f.m_num;
    in>>t_c; //ignore '/'
    in>>f.m_denom;
    assert(f.m_denom!=0&&"Denominator cannot be 0");
    f.reduce();
    return in;
}