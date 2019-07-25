//
// Created by Mindaugas K on 7/25/2019.
//

#ifndef SIMPLE_GAME_PLAYER_H
#define SIMPLE_GAME_PLAYER_H

#include "Creature.h"
#include <iostream>
class Player: public Creature {
private:
    int m_level;
    int m_heal;
    int m_healChance;
public:
    explicit Player(std::string name)
        :Creature{name,'@',10, 1, 0},m_level(1), m_heal(1), m_healChance(1)
    {}
    int getLevel();
    int getHeal();
    int getHealChance();
    void incHealChance();
    void levelUp();
    void tryHeal();
};


#endif //SIMPLE_GAME_PLAYER_H
