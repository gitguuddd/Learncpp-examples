//
// Created by Mindaugas K on 7/23/2019.
//

#include "FixedPoint2.h"
FixedPoint2::operator double() const{
return m_dec + static_cast<double>(m_frac)/100;
}
bool FixedPoint2::operator==(const FixedPoint2 &f){
    return(m_dec==f.m_dec && m_frac==f.m_frac);
}
FixedPoint2 FixedPoint2::operator-() const{
    return FixedPoint2(-m_dec,-m_frac);
}
