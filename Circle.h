#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShape.h"
#include <cmath>

class Circle : public BasicShape {
private:
    double xCenter;
    double yCenter;
    double radius;

public:
    //Constructor
    Circle(double x, double y, double r, const string& n = "Circle");

    //Getters
    double GetXCenter() const { return xCenter; }
    double GetYCenter() const { return yCenter; }
    double GetRadius() const { return radius; }

    //Setters
    void SetXCenter(double x);
    void SetYCenter(double y);
    void SetRadius(double r);

    //alculate area
    void CalculateArea() override;
};

#endif