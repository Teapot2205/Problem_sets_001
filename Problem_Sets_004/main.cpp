#include <iostream>
#include "circle.h"
#include "square.h"

int main() 
{
    SpellAreaEffect* circle = new CircleAreaEffect(5.0);
    SpellAreaEffect* square = new SquareAreaEffect(4.0);

    std::cout << "Circle AoE area: " << circle->calculateArea() << std::endl;
    std::cout << "Square AoE area: " << square->calculateArea() << std::endl;

    return 0;
}