#include <iostream>
#include "quadrangle.h"
#include <string>
#include "bad_fig.h"

Quadrangle::Quadrangle() 
{
    sidesCount = 4;
}
Quadrangle::Quadrangle(std::string name, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD) : Quadrangle()
{
    this->name = name;
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
    this->sideD = sideD;
    this->angleA = angleA;
    this->angleB = angleB;
    this->angleC = angleC;
    this->angleD = angleD;
    if (sidesCount != 4)
    {
        Figure::info();
        throw BadFig("Причина: количество сторон не равно 4.");
    }
    if ((angleA + angleB + angleC + angleD) != 360)
    {
        Figure::info();
        throw BadFig("Причина: cумма углов не равна 360.");
    }
}
void Quadrangle::print()
{
    std::cout << "(cтороны " << sideA << ", " << sideB << ", " << sideC << ", " << sideD;
    std::cout << " углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ")";
}