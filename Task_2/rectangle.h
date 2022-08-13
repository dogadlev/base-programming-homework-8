#pragma once
#include "parallelogram.h"
#include <string>

class Rectangle : public Parallelogram
{
public:
    Rectangle(std::string name, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD);
};