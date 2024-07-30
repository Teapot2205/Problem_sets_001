#pragma once

#include "polygon.h"

class Triangle : public Polygon
{
public:
    Triangle(float w, float h);
    float getArea() override;
};
