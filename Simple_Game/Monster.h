//
// Created by Mindaugas K on 7/25/2019.
//

#ifndef SIMPLE_GAME_MONSTER_H
#define SIMPLE_GAME_MONSTER_H
int getRandomNumber(int min, int max);
#include "Creature.h"

class Monster: public Creature {
public:
 enum Type{
     DRAGON,
     ORC,
     SLIME,
     MAX_TYPES
 };
 struct Monsterdata{
     std::string name;
     char symbol;
     int hitPoints;
     int damage;
     int gold;
 };
 static Monsterdata m_monsterData[MAX_TYPES];
 explicit Monster(Type type)
    :Creature(m_monsterData[type].name,m_monsterData[type].symbol,m_monsterData[type].hitPoints,m_monsterData[type].damage,m_monsterData[type].gold)
 {

 }
 static Monster getRandomMonster(){
  int monsterNum=getRandomNumber(0,10);
  if(monsterNum<=3)
     return Monster(static_cast<Type>(2));
  else if(monsterNum>3&&monsterNum<=7)
    return Monster(static_cast<Type>(1));
  else
   return Monster(static_cast<Type>(0));
 }

};


#endif //SIMPLE_GAME_MONSTER_H
