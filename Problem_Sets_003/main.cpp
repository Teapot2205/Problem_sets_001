#include <iostream>
#include "rectangle.h"
#include "triangle.h"

int main()
{
    Polygon* rect = new Rectangle(5.0, 4.0);
    Polygon* tri = new Triangle(5.0, 4.0);

    std::cout << "Rectangle area: " << rect->getArea() << std::endl;
    std::cout << "Triangle area: " << tri->getArea() << std::endl;

    return 0;
}