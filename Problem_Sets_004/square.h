#pragma once
#include "spell.h"

class SquareAreaEffect : public SpellAreaEffect
{
public:
    SquareAreaEffect(float side);
    float calculateArea() const override;
};
