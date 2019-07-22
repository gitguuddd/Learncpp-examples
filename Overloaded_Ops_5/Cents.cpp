//
// Created by Mindaugas K on 7/23/2019.
//

#include "Cents.h"
Cents::operator int() { return m_cents; }
int Cents::getCents() { return m_cents; }
void Cents::setCents(int cents) { m_cents = cents; }