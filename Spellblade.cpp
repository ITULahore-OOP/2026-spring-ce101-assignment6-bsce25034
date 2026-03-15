#include "Spellblade.h"

Spellblade::Spellblade(string name,int h,int p,int armor,int mana,int spell)
: Warrior(name,h,p,armor), MagicalEntity(mana,spell)
{
}

int Spellblade::calculateHybridDamage() const{
    return getPower() + getSpellPower();
}