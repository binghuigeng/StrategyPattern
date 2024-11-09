#ifndef AK47_H
#define AK47_H

#include "WeaponStrategy.h"

class AK47 : public WeaponStrategy
{
public:
    AK47() = default;
    ~AK47() = default;

    void UseWeapon() override;
};

#endif // AK47_H
