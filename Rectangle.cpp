#include "Rectangle.h"

//Constructor
Rectangle::Rectangle(double l, double w, const std::string& n) : length(l), width(w)
{
    SetName(n);   //Set name in BasicShape
    CalculateArea();   //Calculate initial area
}

//Setters
void Rectangle::SetLength(double l) {
    length = l;
    CalculateArea();   //Area depends on length
}

void Rectangle::SetWidth(double w) {
    width = w;
    CalculateArea();   //Area depends on width
}

//Calculate area
void Rectangle::CalculateArea() {
    SetArea(length * width);
}