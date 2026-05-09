#pragma once
#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <string>
using namespace std;

class BasicShape {
private:
    double Area;
    string Name;

public:
    // Constructor
    BasicShape() : Area(0), Name("") {}

    // Getters
    double GetArea() const { return Area; }
    string GetName() const { return Name; }

    // Setters
    void SetArea(double a) { Area = a; }
    void SetName(const string& n) { Name = n; }

    // Pure virtual function
    virtual void CalculateArea() = 0;

    // Virtual destructor
    virtual ~BasicShape() {}
};

#endif