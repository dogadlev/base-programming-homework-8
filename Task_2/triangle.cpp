#include <iostream>
#include <string>
#include "triangle.h"
#include "bad_fig.h"

Triangle::Triangle() : Figure ()
{
    this->sidesCount = 3;
}
Triangle::Triangle(std::string name, int sideA, int sideB, int sideC, int angleA, int angleB, int angleC) : Triangle()
{
    this->name = name;
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
    this->angleA = angleA;
    this->angleB = angleB;
    this->angleC = angleC;
    if (sidesCount != 3) 
    {
        Figure::info();
        throw BadFig("Причина: количество сторон не равно 3.");
    }
    if ((angleA + angleB + angleC) != 180)
    {
        Figure::info();
        throw BadFig("Причина: cумма углов не равна 180.");
    }
}
void Triangle::print() 
{
    std::cout << "(cтороны " << sideA << ", " << sideB << ", " << sideC;
    std::cout << " углы " << angleA << ", " << angleB << ", " << angleC << ")";
}