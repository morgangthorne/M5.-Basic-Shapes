#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#include "Circle.h"

//Constructor
Circle::Circle(double x, double y, double r, const string& n) : xCenter(x), yCenter(y), radius(r)
{
    SetName(n);   // Set name from BasicShape
    CalculateArea();   // Calculate initial area
}

//Setters
void Circle::SetXCenter(double x) {
    xCenter = x;
    CalculateArea();
}

void Circle::SetYCenter(double y) {
    yCenter = y;
    CalculateArea();
}

void Circle::SetRadius(double r) {
    radius = r;
    CalculateArea();   
}

// Calculate area
void Circle::CalculateArea() {
    SetArea(M_PI * radius * radius);
}
