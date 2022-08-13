#pragma once
#include "quadrangle.h"
#include <string>

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(std::string name, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD);
};