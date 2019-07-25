//
// Created by Mindaugas K on 7/25/2019.
//

#ifndef SIMPLE_GAME_CREATURE_H
#define SIMPLE_GAME_CREATURE_H

#include <string>

class Creature {
protected:
    std::string m_name;
    char m_symbol;
    int m_hitPoints;
    int m_damage;
    int m_gold;
public:
    Creature(std::string name, char symbol, int hitPoints=100, int damage=10, int gold=15)
        :m_name{name}, m_symbol{symbol}, m_hitPoints{hitPoints}, m_damage{damage}, m_gold{gold}
    {}
    const std::string& getName();
    const char getSymbol();
    int getHP();
    int getDamage();
    int getGold();
    void reduceHealth(int damage);
    bool isDead();
    void addGold(int gold );
};


#endif //SIMPLE_GAME_CREATURE_H
