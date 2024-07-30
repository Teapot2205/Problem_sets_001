#include "triangle.h"

Triangle::Triangle(float w, float h) : Polygon(w, h)
{
}

float Triangle::getArea()
{
    return 0.5 * width * height;
}
