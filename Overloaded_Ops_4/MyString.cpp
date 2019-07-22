//
// Created by Mindaugas K on 7/23/2019.
//

#include "MyString.h"
#include <cassert>
std::string MyString::operator()(int i, int j){
    assert(i>=0&&i<=m_string.length()-1&&" i cannot exceed [0;string length-1]");
    assert(j>=0&&i+j<=m_string.length()-1&&" i+j length cannot exceed[i;string length -1]");
    std::string temp;
    for(int k=0;k<j;++k)
        temp+=m_string[i+k];
    return temp;
}