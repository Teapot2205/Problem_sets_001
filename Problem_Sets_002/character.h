#pragma once

#include <iostream>
#include <string>
#include "weapon.h"

class Character
{
private:
    std::string name;
    Weapon weapon;

public:

    Character(const std::string& name, const std::string& weaponName, int weaponDamage);
    ~Character();


    std::string getName() const;
    void setName(const std::string& name);
    Weapon getWeapon() const;
    void setWeapon(const Weapon& weapon);

    void display() const;
};
