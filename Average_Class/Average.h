//
// Created by Mindaugas K on 7/23/2019.
//

#ifndef AVERAGE_CLASS_AVERAGE_H
#define AVERAGE_CLASS_AVERAGE_H


#include <stdint-gcc.h>
#include <iostream>

class Average {
private:
    int32_t m_sum{0};
    int8_t m_numbers{0};
public:
    Average()=default;
    Average& operator+=(int val);
    friend std::ostream& operator<<(std::ostream& out, const Average &avg);
};


#endif //AVERAGE_CLASS_AVERAGE_H
