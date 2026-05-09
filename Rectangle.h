#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShape.h"

class Rectangle : public BasicShape {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w, const std::string& n = "Rectangle");

    // Getters
    double GetLength() const { return length; }
    double GetWidth() const { return width; }

    // Setters
    void SetLength(double l);
    void SetWidth(double w);

    // Calculate area
    void CalculateArea() override;
};

#endif
