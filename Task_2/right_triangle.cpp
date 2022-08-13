#include "right_triangle.h"
#include "bad_fig.h"
#include <string>

RightTriangle::RightTriangle(std::string name, int sideA, int sideB, int sideC, int angleA, int angleB, int angleC) : Triangle(name, sideA, sideB, sideC, angleA, angleB, angleC)
{
    if (angleC != 90)
    {
        Figure::info();
        throw BadFig("Причина: угол С не равен 90.");
    }
}