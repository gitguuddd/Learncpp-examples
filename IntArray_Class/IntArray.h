//
// Created by Mindaugas K on 7/23/2019.
//

#ifndef INTARRAY_CLASS_INTARRAY_H
#define INTARRAY_CLASS_INTARRAY_H

#include <cassert>
#include <iostream>

class IntArray {
private:
    int m_length=0;
    int* m_array= nullptr;
public:
    IntArray(int length):m_length(length){
        assert(m_length>0&&"array length should be a positive integer");
        m_array=new int[m_length]{0};
    }
    IntArray(const IntArray &array):m_length(array.m_length){
        m_array=new int[m_length];
        for (int count=0;count<array.m_length;count++)
            m_array[count]=array.m_array[count];

    }
    ~IntArray(){
        delete[] m_array;
    }

    int& operator[](int index);
    friend std::ostream& operator<<(std::ostream& out, const IntArray &array);
    IntArray& operator=(const IntArray &array);
};


#endif //INTARRAY_CLASS_INTARRAY_H
