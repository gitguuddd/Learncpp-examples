//
// Created by Mindaugas K on 7/23/2019.
//

#include "Average.h"
Average& Average::operator+=(int val){
    m_sum+=val;
    m_numbers++;
    return *this;
}
std::ostream& operator<<(std::ostream& out, const Average &avg){
    out<< static_cast<double>(avg.m_sum)/ static_cast<double>(avg.m_numbers);
    return out;
}