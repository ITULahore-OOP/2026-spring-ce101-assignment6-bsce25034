#ifndef SPELLBLADE_H
#define SPELLBLADE_H

#include "Warrior.h"
#include "MagicalEntity.h"

class Spellblade : public Warrior , public MagicalEntity{

public:
    Spellblade(string,int,int,int,int,int);

    int calculateHybridDamage() const;
};

#endif