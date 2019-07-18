#include <iostream>
#include <string>
enum class MonsterRace{
    OGRE,
    DRAGON,
    ORC,
    GIANT_SPIDER,
    SLIME
};

struct Monster{
    MonsterRace race;
    std::string name;
    int health;
};
std::string raceToString(Monster enemy){
    if(enemy.race==MonsterRace::OGRE)
        return " ogre ";
    if(enemy.race==MonsterRace::DRAGON)
        return " dragon ";
    if(enemy.race==MonsterRace::ORC)
        return " orc ";
    if(enemy.race==MonsterRace::GIANT_SPIDER)
        return " giant spider ";
    if(enemy.race==MonsterRace::SLIME)
        return " slime ";
    return "unknown";
}
void printMonster(Monster enemy){
    std::string text("This");
    text=text + raceToString(enemy) + "is named " + enemy.name + " and has ";
    std::cout<<text<<enemy.health<<" health.\n";


}
int main() {
    Monster a{MonsterRace::OGRE, "Torg", 145};
    Monster b{MonsterRace::SLIME, "BLURP IM PICKLE RICK MORTY", 23};
    printMonster(a);
    printMonster(b);
    return 0;
}