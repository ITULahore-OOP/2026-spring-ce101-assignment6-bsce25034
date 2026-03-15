#ifndef WARRIOR_H
#define WARRIOR_H

#include "Hero.h"

class Warrior : public Hero{
private:
    int armorRating;

public:
    Warrior(string, int, int, int);

    int getArmor() const;

    int calculateEffectiveHealth() const;
};

#endif