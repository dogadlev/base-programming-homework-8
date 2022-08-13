#pragma once
#include "figure.h"
#include <string>

class Triangle : public Figure
{
private:
    int sideA = 0;
    int sideB = 0;
    int sideC = 0;
    int angleA = 0;
    int angleB = 0;
    int angleC = 0;
public:
    Triangle();
    Triangle(std::string name, int sideA, int sideB, int sideC, int angleA, int angleB, int angleC);
    void print() override;
};