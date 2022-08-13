#pragma once
#include "triangle.h"
#include <string>

class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle(std::string name, int sideA, int sideB, int sideC, int angleA, int angleB, int angleC);
};