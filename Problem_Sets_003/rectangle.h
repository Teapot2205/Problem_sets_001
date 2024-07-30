#pragma once

#include "polygon.h"

class Rectangle : public Polygon
{
public:
    Rectangle(float w, float h);
    float getArea() override;
};
