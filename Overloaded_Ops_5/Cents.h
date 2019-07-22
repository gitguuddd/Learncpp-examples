//
// Created by Mindaugas K on 7/23/2019.
//

#ifndef OVERLOADED_OPS_5_CENTS_H
#define OVERLOADED_OPS_5_CENTS_H


class Cents
{
private:
    int m_cents;
public:
    Cents(int cents = 0)
    {
        m_cents = cents;
    }

    // Overloaded int cast
    operator int();
    int getCents();
    void setCents(int cents);
};
#endif //OVERLOADED_OPS_5_CENTS_H
