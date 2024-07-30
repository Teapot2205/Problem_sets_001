#include "spell.h"

SpellAreaEffect::SpellAreaEffect(float dim) : dimension(dim)
{
}

float SpellAreaEffect::getDimension() const
{
    return dimension;
}
