#pragma once
#include "figure.h"
#include <string>

class Quadrangle : public Figure
{
private:
    int sideA = 0;
    int sideB = 0;
    int sideC = 0;
    int sideD = 0;
    int angleA = 0;
    int angleB = 0;
    int angleC = 0;
    int angleD = 0;
public:
    Quadrangle();
    Quadrangle(std::string name, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD);
    void print() override;
};
