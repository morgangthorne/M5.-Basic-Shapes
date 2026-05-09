#include "Square.h"

//Constructor
Square::Square(double s, const std::string& n)
    : Rectangle(s, s)  //Passes side as both length and width
{
    side = s;
    SetName(n);        
}

//Setter
void Square::SetSide(double s) {
    side = s;
    SetLength(s);  //Updates Rectangle length
    SetWidth(s);   //Updates Rectangle width
}