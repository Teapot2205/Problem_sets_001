#pragma once

class SpellAreaEffect
{
protected:
    float dimension;
public:
    SpellAreaEffect(float dim);
    float getDimension() const;
    virtual float calculateArea() const = 0;
};
