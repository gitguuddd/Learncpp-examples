//
// Created by Mindaugas K on 7/24/2019.
//

#include "IntArray.h"
IntArray& IntArray::operator=(const std::initializer_list<int> &list){
    int length{static_cast<int>(list.size())};
    if(length!=m_length)
    {
        delete[] m_data;
        m_length=length;
        m_data= new int [length];
    }
    int count=0;
    for(int element:list)
    {
        m_data[count]=element;
        ++count;
    }
    return *this;
}
int& IntArray::operator[](int index){
    assert(index>=0&&index<m_length);
    return m_data[index];
}
int IntArray::getLength(){
    return m_length;
}
