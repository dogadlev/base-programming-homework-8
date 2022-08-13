#pragma once
#include "triangle.h"
#include <string>

class RightTriangle : public Triangle
{
public:
    RightTriangle(std::string name, int sideA, int sideB, int sideC, int angleA, int angleB, int angleC);
};