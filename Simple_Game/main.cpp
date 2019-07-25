#include <iostream>
#include "Creature.h"
#include "Player.h"
#include "Monster.h"
#include <cstdlib>
#include <ctime>
int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
    // evenly distribute the random number across our range
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
bool hasWon(Player& p ){
    return(p.getLevel()>=20);
}
void viewHP(Player& p){
    std::cout<<"You have "<<p.getHP()<<" HP.\n";
}
char playerChoice(Player& p){
    char choice;
    do{
        std::cout<<"(F)ight, (R)un, (C)heck HP?\n";
        std::cin>>choice;
        if(choice!='f'&&choice!='r'&&choice!='c'&&choice!='F'&&choice!='R'&&choice!='C'){
            std::cout<<"Bad input, try again.\n";
            std::cin.ignore(256,'\n');
            std::cin.clear();}
        else if(choice=='c'||choice=='C')
            std::cout<<"You have "<<p.getHP()<<" HP\n";

    }while(choice!='f'&&choice!='r'&&choice!='F'&&choice!='R');
}
void healChoice(Player& p){
    do{
        char choice;
      std::cout<<"Try to heal [Y/N]? ("<< 100/(5-p.getHealChance())<<"% chance so succeed)\n";
      std::cin>>choice;
      if(choice!='Y'&&choice!='y'&&choice!='n'&&choice!='N'){
          std::cout<<"Bad input, try again.\n";
          std::cin.ignore(256,'\n');
          std::cin.clear();
      }
      else if(choice=='Y'||choice=='y'){
          p.tryHeal();
          break;}
      else{
          if(p.getHealChance()!=4){
          p.incHealChance();
          std::cout<<"Heal chance increased for next heal attempt\n";
        break;}
          else{
            std::cout<<"Maximum heal chance reached\n";
            break;
        }}

    }while(true);
}
void monsterAttack(Player& p, Monster& m){
    if(p.isDead())
        return;
    if(m.isDead())
        return;
    std::cout<<m.getName()<<" hits you for "<<m.getDamage()<<" damage.\n";
    p.reduceHealth(m.getDamage());
}
void playerAttack(Player& p, Monster& m){
    if(p.isDead())
        return;
    std::cout<<"You hit the "<< m.getName()<<" for "<< p.getDamage()<<" damage.\n";
    m.reduceHealth(p.getDamage());
    if(m.isDead()){
        std::cout<<"You have defeated the monster. Level up!\n";
        p.levelUp();
        std::cout<<"You have found "<<m.getGold()<<" gold\n";
        p.addGold(m.getGold());
        healChoice(p);
    }
}
void fightMonster(Player &p){
Monster m=Monster::getRandomMonster();
std::cout<<"You encounter a/an "<<m.getName()<<" ("<<m.getSymbol()<<").\n";
while(!p.isDead()&&!m.isDead()){
    char choice=playerChoice(p);
    if(choice=='r'||choice=='R')
    {
        if(getRandomNumber(0,1)==1){
            std::cout<<"You managed to run away\n";
            break;
        }
        else{
            std::cout<<"You fail to run away\n";
            monsterAttack(p,m);
        }
    }
    else
        {
        playerAttack(p,m);
        monsterAttack(p,m);
        }
}
}
void game(Player& p){
    while(!hasWon(p)&&!p.isDead())
        fightMonster(p);
    if(p.isDead()){
        std::cout<<"You died at level "<<p.getLevel()<<" while carrying "<<p.getGold()<<" gold. RIP, too bad :/. \n";
    }
    else
        std::cout<<"CONGRATULATIONS, YOU WON THE GAME WITH "<<p.getGold()<<" GOLD.\n";

}
void printTips(){
    std::cout<<"The game end when the player wins (reaches level 20) or when the player loses (health reduced to 0).\n";
    std::cout<<"The player starts the game with level 1, hp 10 , damage 1, heal 1, and gold 0.\n";
    std::cout<<"Gold=players' score. It is gained by killing monsters.\n";
    std::cout<<"For every level gained players' damage increases by 1.\n";
    std::cout<<"For every third level gained player gets a free heal.\n ";
    std::cout<<"For every fifth level gained players' heal increases by 1\n";
    std::cout<<"While fighting a monster the player can choose to fight, run away or view players' hitpoints.\n";
    std::cout<<"Running away has a 50% fail chance. If the player fails the monster gets a free hit.\n";
    std::cout<<"After each fight the player can try to heal itself. If the player refuses to heal - \n the chance of healing itself will increase next time. \n";
}
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    char tips;
  do{
      std::cout<<"Do you want to see some info about game mechanics [Y/N]?\n";
      std::cin>>tips;
      if(tips!='y'&&tips!='n'&&tips!='Y'&&tips!='N'){
          std::cout<<"Bad input, try again.\n";
          std::cin.ignore(256,'\n');
          std::cin.clear();
          continue;}
      else if(tips=='Y'||tips=='y') {
          std::cin.ignore(256,'\n');
          std::cin.clear();
          printTips();
          break;
      }
      else{
          std::cin.ignore(256,'\n');
          std::cin.clear();
          break;}
  }while(true);

  std::string name;
  std::cout<<"Enter your name: ";
  std::cin>>name;
  Player player(name);
  std::cout<<"Welcome to your doom, "<<player.getName()<<".\n";
  std::cout<<"You have "<<player.getHP()<<" HP and are carrying "<<player.getGold()<<" gold.\n";
  game(player);

    return 0;
}