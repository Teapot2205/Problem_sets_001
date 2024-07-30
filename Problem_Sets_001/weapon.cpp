#include "weapon.h"

Weapon::Weapon()
{
    name = "Sword";
    damage = 1000;
}

Weapon::~Weapon()
{
}

void Weapon::display() const
{
    std::cout << "Weapon Name: " << name << "\nDamage: " << damage << std::endl;
}
