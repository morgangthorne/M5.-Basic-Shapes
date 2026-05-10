// M5. Basic Shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main() {
    //Construction Tests
    Rectangle rect1(3, 4, "MyRectangle1 - ");
    Rectangle rect2(5, 6, "MyRectangle2 - ");
    Circle circ1(0, 0, 2, "MyCircle1 - ");
    Circle circ2(1, 1, 3, "MyCircle2 - ");
    Square sq1(4, "MySquare1 - ");

    //Store all shapes in a BasicShape* array
    vector<BasicShape*> shapes = { &rect1, &rect2, &circ1, &circ2, &sq1 };

    //Polymorphism Test: print name and area
    cout << "Initial Shape Areas:" << endl;
    for (auto shape : shapes) {
        cout << shape->GetName() << " area: " << shape->GetArea() << endl;
    }
    cout << "----------------------------" << endl;

    //Setter Tests
    cout << "Testing setters..." << endl;

    //Circle
    circ1.SetRadius(5);
    circ1.SetXCenter(2);
    circ1.SetYCenter(3);

    //Rectangle
    rect1.SetLength(10);
    rect1.SetWidth(2);

    //Square
    sq1.SetSide(7);

    //Print updated areas
    cout << "Updated Shape Areas:" << endl;
    for (auto shape : shapes) {
        cout << shape->GetName() << " area: " << shape->GetArea() << endl;
    }

    return 0;
}