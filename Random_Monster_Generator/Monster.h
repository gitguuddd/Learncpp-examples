//
// Created by Mindaugas K on 7/21/2019.
//

#ifndef RANDOM_MONSTER_GENERATOR_MONSTER_H
#define RANDOM_MONSTER_GENERATOR_MONSTER_H
#include <string>

class Monster {
public:
    enum MonsterType{
        DRAGON,
        GOBLIN,
        OGRE,
        ORC,
        SKELETON,
        TROLL,
        VAMPIRE,
        ZOMBIE,
        MAX_MONSTER_TYPES

    };
private:
    MonsterType m_type;
    std::string m_name;
    std::string m_roar;
    int m_hp;
public:
    Monster(MonsterType type, std::string name, std::string roar, int hp)
        :m_type(type), m_name(name), m_roar(roar), m_hp(hp)
    {}
    std::string getTypeString();
    void print();
};


#endif //RANDOM_MONSTER_GENERATOR_MONSTER_H
