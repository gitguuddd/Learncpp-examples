//
// Created by Mindaugas K on 7/21/2019.
//

#include "Monster.h"
#include <iostream>
#include <string>
std::string Monster::getTypeString() {
    switch(m_type){
        case DRAGON:
            return "dragon";
        case GOBLIN:
            return "goblin";
        case OGRE:
            return "ogre";
        case ORC:
            return "orc";
        case SKELETON:
            return "skeleton";
        case TROLL:
            return "troll";
        case VAMPIRE:
            return "vampire";
        case ZOMBIE:
            return "zombie";
        default:
            return "???";
    }
}
void Monster::print() {
    std::cout<<m_name<<" the "<<getTypeString()<<" has "<<m_hp<<" hitpoints and says "<<m_roar<<"\n";
}