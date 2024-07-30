#include "character.h"


Character::Character(const std::string& name, const std::string& weaponName, int weaponDamage)
    : name(name), weapon(weaponName, weaponDamage)
{
}

Character::~Character()
{

}

std::string Character::getName() const
{
    return name;
}

void Character::setName(const std::string& name)
{
    this->name = name;
}

Weapon Character::getWeapon() const
{
    return weapon;
}

void Character::setWeapon(const Weapon& weapon)
{
    this->weapon = weapon;
}

void Character::display() const
{
    std::cout << "Character Name: " << name << "\n";
    weapon.display();
}