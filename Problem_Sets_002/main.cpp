#include "character.h"

int main()
{

    Character wizard("Wizard", "Staff", 4);
    Character rogue("Rogue", "Dagger", 5);
    Character archer("Archer", "Bow", 3);
    Character soldier("Soldier", "Sword", 6);

    wizard.display();
    rogue.display();
    archer.display();
    soldier.display();

    return 0;
}