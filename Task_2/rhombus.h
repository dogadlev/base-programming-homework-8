#pragma once
#include "parallelogram.h"
#include <string>

class Rhombus : public Parallelogram
{
public:
    Rhombus(std::string name, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD);
};
