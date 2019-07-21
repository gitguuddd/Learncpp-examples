#include <iostream>
#include "Monster.h"
#include "MonsterGenerator.h"
int main() {
    Monster m=MonsterGenerator::generateMonster();
    m.print();
    return 0;
}