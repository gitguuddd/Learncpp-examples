//
// Created by Mindaugas K on 7/23/2019.
//

#include "Dollars.h"
#include "Cents.h"
Dollars::operator Cents() { return Cents(m_dollars * 100); }
