//
// Created by Mindaugas K on 7/21/2019.
//

#ifndef RANDOM_MONSTER_GENERATOR_MONSTERGENERATOR_H
#define RANDOM_MONSTER_GENERATOR_MONSTERGENERATOR_H

class Monster;

class MonsterGenerator {
public:
    static int getRandomNumber(int min, int max);
    static Monster generateMonster();
};


#endif //RANDOM_MONSTER_GENERATOR_MONSTERGENERATOR_H
