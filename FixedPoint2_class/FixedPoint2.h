//
// Created by Mindaugas K on 7/23/2019.
//

#ifndef FIXEDPOINT2_CLASS_FIXEDPOINT2_H
#define FIXEDPOINT2_CLASS_FIXEDPOINT2_H

#include <cstdint>
#include <cassert>
#include <cmath>

class FixedPoint2 {
private:
    int_least16_t m_dec;
    int_least8_t m_frac;
public:
    explicit FixedPoint2(int_least16_t dec=0, int_least8_t frac=0)
        :m_dec(dec),m_frac(frac){
        assert(frac<=99&&frac>=-99&&"Fractional part of the number must not exceed [-99;99]");
        if(m_dec<0||m_frac<0){
            if(m_dec>0)
                m_dec=-m_dec;
            if(m_frac>0)
                m_frac=-m_frac;
        }
    }
   explicit FixedPoint2(double d){
        m_dec= static_cast<int_least16_t >(d);
        m_frac= static_cast<int_least8_t >(std::round((d-m_dec)*100));
    }
    explicit operator double() const;
    bool operator==(const FixedPoint2 &f);
    FixedPoint2 operator-() const;
};



#endif //FIXEDPOINT2_CLASS_FIXEDPOINT2_H
