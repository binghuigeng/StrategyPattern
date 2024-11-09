#ifndef WEAPONSTRATEGY_H
#define WEAPONSTRATEGY_H

#include <iostream>

class WeaponStrategy
{
public:
    WeaponStrategy() = default;
    virtual ~WeaponStrategy() = default;

    virtual void UseWeapon() = 0;
};

#endif // WEAPONSTRATEGY_H
