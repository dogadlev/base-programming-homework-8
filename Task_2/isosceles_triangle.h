#pragma once
#include "triangle.h"
#include <string>

class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle(std::string name, int sideA, int sideB, int sideC, int angleA, int angleB, int angleC);
};
