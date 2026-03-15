#include "Warrior.h"

Warrior::Warrior(string name,int h,int p,int armor)
: Hero(name,h,p)
{
    armorRating = armor;
}

int Warrior::getArmor() const{
    return armorRating;
}

int Warrior::calculateEffectiveHealth() const{
    return getHealth() + (armorRating * 2);
}