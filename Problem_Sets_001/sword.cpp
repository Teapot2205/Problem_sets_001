#include "sword.h"


Sword::Sword() : Weapon()
{
    sharpness = 100;
    bladeLength = 50.0;
}


Sword::~Sword()
{
}

void Sword::display() const
{
    Weapon::display();
    std::cout << "Sharpness: " << sharpness << "\nBlade Length: " << bladeLength << " Centimeters" << std::endl;
}
