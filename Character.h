#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>

class WeaponStrategy;

class Character
{
public:
    Character() = default;
    ~Character() = default;

    WeaponStrategy* pWeapon;
    void setWeapon(WeaponStrategy* pWeapon);

    void ThrowWeapon();
};

#endif // CHARACTER_H
