#pragma once

class Polygon
{
protected:
    float width;
    float height;
public:
    Polygon(float w, float h);
    virtual float getArea() = 0;
};
