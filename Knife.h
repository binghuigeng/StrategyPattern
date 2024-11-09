#ifndef KNIFE_H
#define KNIFE_H

#include "WeaponStrategy.h"

class Knife : public WeaponStrategy
{
public:
    Knife() = default;
    ~Knife() = default;

    void UseWeapon() override;
};

#endif // KNIFE_H
