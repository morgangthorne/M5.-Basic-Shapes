#pragma once
#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {
private:
    double side;

public:
    //Constructor
    Square(double s, const std::string& n = "Square");

    //Getter
    double GetSide() const { return side; }

    //Setter
    void SetSide(double s);
};

#endif