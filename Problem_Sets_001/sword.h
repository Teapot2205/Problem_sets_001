#pragma once

#include "weapon.h"

class Sword : public Weapon {
private:
    int sharpness;
    double bladeLength;

public:

    Sword();
    ~Sword();

    void display() const override;
};
