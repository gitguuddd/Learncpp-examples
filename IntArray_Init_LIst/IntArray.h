//
// Created by Mindaugas K on 7/24/2019.
//

#ifndef INTARRAY_INIT_LIST_INTARRAY_H
#define INTARRAY_INIT_LIST_INTARRAY_H

#include <cassert>
#include <initializer_list>
#include <iostream>

class IntArray {
private:
    int m_length{};
    int *m_data{};
public:
    explicit IntArray()=default

    explicit IntArray(int length)
            : m_length(length) {
        m_data = new int[length];
    }

    IntArray(const std::initializer_list<int> &list)
            : IntArray(static_cast<int>(list.size())) {
        int count = 0;
        for (auto &element : list)
        {
            m_data[count]=element;
            ++count;
        }
    }
    ~IntArray()
    {delete[] m_data;
    }
    IntArray(const IntArray&)= delete;
    IntArray& operator=(const IntArray& list) = delete;
    IntArray& operator=(const std::initializer_list<int> &list);
    int& operator[](int index);
    int getLength();
};


#endif //INTARRAY_INIT_LIST_INTARRAY_H
