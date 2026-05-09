#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#include "Circle.h"

// Constructor
Circle::Circle(double x, double y, double r, const string& n) : xCenter(x), yCenter(y), radius(r)
{
    SetName(n);   // Set name from BasicShape
    CalculateArea();   // Calculate initial area
}

// Setters
void Circle::SetXCenter(double x) {
    xCenter = x;
    // Area does not depend on center, but consistency is good
    CalculateArea();
}

void Circle::SetYCenter(double y) {
    yCenter = y;
    // Area does not depend on center, but consistency is good
    CalculateArea();
}

void Circle::SetRadius(double r) {
    radius = r;
    CalculateArea();   // Area depends on radius
}

// Calculate area
void Circle::CalculateArea() {
    SetArea(M_PI * radius * radius);
}
