#ifndef HERO_H
#define HERO_H

#include<iostream>
using namespace std;

class Hero{
private:
    string heroName;
    int health;
    int basePower;

public:
    Hero(string, int, int);
    virtual ~Hero();

    string getName() const;
    int getHealth() const;
    int getPower() const;

    void takeDamage(int damage);

    bool operator>(const Hero &other) const;
    int operator+(const Hero &other) const;
};

#endif