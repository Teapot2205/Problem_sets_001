#pragma once
#include "spell.h"

class CircleAreaEffect : public SpellAreaEffect
{
public:
    CircleAreaEffect(float radius);
    float calculateArea() const override;
};