#include "circle.h"

CircleAreaEffect::CircleAreaEffect(float radius) : SpellAreaEffect(radius)
{
}

float CircleAreaEffect::calculateArea() const
{
    return 3.14159 * dimension * dimension;
}