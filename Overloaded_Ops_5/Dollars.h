//
// Created by Mindaugas K on 7/23/2019.
//

#ifndef OVERLOADED_OPS_5_DOLLARS_H
#define OVERLOADED_OPS_5_DOLLARS_H
class Cents;

class Dollars
{
private:
    int m_dollars;
public:
    explicit Dollars(int dollars=0)
    {
        m_dollars = dollars;
    }

    // Allow us to convert Dollars into Cents
    operator Cents();
};


#endif //OVERLOADED_OPS_5_DOLLARS_H
