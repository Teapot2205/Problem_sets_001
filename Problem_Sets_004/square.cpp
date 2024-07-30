#include "square.h"

SquareAreaEffect::SquareAreaEffect(float side) : SpellAreaEffect(side)
{
}

float SquareAreaEffect::calculateArea() const
{
    return dimension * dimension;
}
