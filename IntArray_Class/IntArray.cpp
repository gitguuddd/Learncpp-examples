//
// Created by Mindaugas K on 7/23/2019.
//

#include "IntArray.h"
std::ostream& operator<<(std::ostream& out, const IntArray &array){
    for(int count=0;count<array.m_length;count++)
        out<<array.m_array[count]<<' ';
    return out;
}
int& IntArray::operator[](int index){
    assert(index>=0&&index<=m_length-1&&"Index must be inside the bound of the array");
    return m_array[index];
}
IntArray& IntArray::operator=(const IntArray &array){
    if(this==&array)
        return *this;
    delete[] m_array;
    m_length=array.m_length;
    m_array=new int[m_length];
    for(int count=0;count<m_length;count++)
        m_array[count]=array.m_array[count];
    return *this;

}