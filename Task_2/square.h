#pragma once
#include "rectangle.h"
#include <string>

class Square : public Rectangle
{
public:
    Square(std::string name, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD);
};