//
// Created by Mindaugas K on 7/21/2019.
//

#include "MonsterGenerator.h"
#include "Monster.h"
int MonsterGenerator::getRandomNumber(int min, int max){
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
Monster MonsterGenerator::generateMonster() {
    int randType=getRandomNumber(0,Monster::MAX_MONSTER_TYPES-1);
    int randHp=getRandomNumber(1,100);
    int randName=getRandomNumber(0,5);
    int randRoar=getRandomNumber(0,5);
    static std::string s_names[6]{"Anuccuas","Minondoast","Ogriff","Ityr","Wruaaras","Silevurn"};
    static std::string s_roars[6]{"*roar*","*aaargh*","*rattle*","*squeal*","*oof*","*yeowch*"};
    return Monster(static_cast<Monster::MonsterType>(randType),s_names[randName],s_roars[randRoar],randHp);
}