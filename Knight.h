#ifndef KNIGHT_H
#define KNIGHT_H

#include "Warrior.h"

class Knight : public Warrior{
private:
    int chargeBonus;

public:
    Knight(string,int,int,int,int);

    int getChargeBonus() const;

    int calculateBurstDamage() const;
};

#endif