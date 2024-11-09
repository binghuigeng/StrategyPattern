#include <iostream>
#include "Character.h"
#include "Knife.h"
#include "AK47.h"

int main()
{
    Character* character = new Character;
    WeaponStrategy* knife = new Knife;
    WeaponStrategy* ak47 = new AK47;

    //用匕首当作武器
    character->setWeapon(knife);
    character->ThrowWeapon();

    character->setWeapon(ak47);
    character->ThrowWeapon();

    delete ak47;
    ak47 = nullptr;
    delete knife;
    knife = nullptr;
    delete character;
    character = nullptr;

    return 0;
}
