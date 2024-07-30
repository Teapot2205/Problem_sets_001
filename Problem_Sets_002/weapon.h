#pragma once

#include <iostream>
#include <string>

class Weapon
{
private:
    std::string name;
    int damage;

public:


    Weapon(const std::string& name, int damage);
    ~Weapon();


    std::string getName() const;
    void setName(const std::string& name);
    int getDamage() const;
    void setDamage(int damage);


    void display() const;
};