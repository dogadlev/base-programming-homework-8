#include "rectangle.h"
#include <string>
#include "bad_fig.h"

Rectangle::Rectangle(std::string name, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD) : Parallelogram(name, sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD)
{
    if (!(angleA == 90 && angleB == 90 && angleC == 90 && angleD == 90))
    {
        Figure::info();
        throw BadFig("Причина: все углы не равны 90.");
    }
}