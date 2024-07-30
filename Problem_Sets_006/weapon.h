#pragma once
#include "item.h"
#include "augmentation.h"

class Weapon : public Item
{
private:
    Augmentation augmentation;
public:
    Weapon();
    ~Weapon();
};
