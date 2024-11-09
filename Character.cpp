#include "Character.h"
#include "WeaponStrategy.h"

void Character::setWeapon(WeaponStrategy *pWeapon)
{
    this->pWeapon = pWeapon;
}

void Character::ThrowWeapon()
{
    this->pWeapon->UseWeapon();
}
