//
// Created by Mindaugas K on 7/25/2019.
//

#include "Player.h"
int getRandomNumber(int min, int max);

int Player::getLevel()
{
    return m_level;
}
int Player::getHeal() {
    return m_heal;
}
int Player::getHealChance(){
    return m_healChance;
}
void Player::incHealChance(){
    m_healChance++;
}
void Player::levelUp()
{
    m_level+=1;
    if(getLevel()%5==0){
        m_heal+=1;
        std::cout<<"Heal increased to "<<getHeal()<<"\n";}
    m_damage+=1;
    std::cout<<"Damage increased to "<<getDamage()<<"\n";
    if(getLevel()%3==0)
    {
     std::cout<<"The gods notice your struggle - you feel restored\n";
     m_hitPoints+=getHeal();
     if(m_hitPoints>10)
         m_hitPoints=m_hitPoints-m_hitPoints%10;
    }
}

void Player::tryHeal(){
    if(getRandomNumber(0,4)>=4-getHealChance())
    {
        std::cout<<"You heal yourself for "<< getHeal()<<" hitpoints \n";
        m_hitPoints+=getHeal();
        if(m_hitPoints>10)
            m_hitPoints=m_hitPoints-m_hitPoints%10;
    }
    else{
        std::cout<<"You fail to heal yourself \n";
    }
    m_healChance=1;

}
