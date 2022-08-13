#include "parallelogram.h"
#include <string>
#include "bad_fig.h"

Parallelogram::Parallelogram(std::string name, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD) : Quadrangle(name, sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD)
{
    if (!(sideA == sideC && sideB == sideD))
    {
        Figure::info();
        throw BadFig("Причина: стороны а и с или b и d попарно не равны.");
    }
    if (!(angleA == angleC && angleB == angleD))
    {
        Figure::info();
        throw BadFig("Причина: углы A и C или B и D попарно не равны.");
    }
}