//
// Created by Mindaugas K on 7/29/2019.
//

#ifndef PAIR_TEMPLATE_PAIR2_H
#define PAIR_TEMPLATE_PAIR2_H
template <class T, class S>
class Pair2 {
    T m_first;
    S m_second;
public:
    Pair2(const T& first,const S& second)
            :m_first(first),m_second(second)
    {

    }
    const T& first() const;
    const S& second() const;
};
template<class T, class S>
const T& Pair2<T,S>::first() const{
    return m_first;
}

template<class T, class S>
const S& Pair2<T,S>::second() const{
    return m_second;
}

#endif //PAIR_TEMPLATE_PAIR2_H
