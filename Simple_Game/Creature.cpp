//
// Created by Mindaugas K on 7/25/2019.
//

#include "Creature.h"
const std::string& Creature::getName()
{
    return m_name;
}
const char Creature::getSymbol()
{
    return m_symbol;
}
int Creature::getHP()
{
    return m_hitPoints;
}
int Creature::getDamage()
{
    return m_damage;
}
int Creature::getGold()
{
    return m_gold;
}
void Creature::reduceHealth(int damage)
{
    m_hitPoints-=damage;
}
bool Creature::isDead()
{
    return(getHP()<=0);
}
void Creature::addGold(int gold)
{
    m_gold+=gold;
}