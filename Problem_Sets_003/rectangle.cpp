#include "rectangle.h"

Rectangle::Rectangle(float w, float h) : Polygon(w, h)
{
}

float Rectangle::getArea()
{
    return width * height;
}
