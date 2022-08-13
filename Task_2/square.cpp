#include "square.h"
#include <string>
#include "bad_fig.h"

Square::Square(std::string name, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD) : Rectangle(name, sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD)
{
    if (!(sideA == sideB && sideA == sideC && sideA == sideD))
    {
        Figure::info();
        throw BadFig("Причина: все стороны не равны.");
    }
}