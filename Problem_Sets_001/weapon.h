#pragma once

#include <iostream>
#include <string>

class Weapon {
protected:
    std::string name;
    int damage;

public:

    Weapon();
    virtual ~Weapon();
    virtual void display() const;
};
