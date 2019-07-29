//
// Created by Mindaugas K on 7/29/2019.
//

#ifndef PAIR_TEMPLATE_PAIR1_H
#define PAIR_TEMPLATE_PAIR1_H

template <class T>
class Pair1 {
T m_first;
T m_second;
public:
    Pair1(const T& first,const T& second)
        :m_first(first),m_second(second)
    {

    }
    const T& first() const;
    const T& second() const;
};
template<class T>
const T& Pair1<T>::first() const{
    return m_first;
}

template<class T>
const T& Pair1<T>::second() const{
    return m_second;
}

#endif //PAIR_TEMPLATE_PAIR1_H
