#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H

class MagicalEntity{
private:
    int manaPool;
    int spellPower;

public:
    MagicalEntity(int,int);

    int getMana() const;
    int getSpellPower() const;
};

#endif