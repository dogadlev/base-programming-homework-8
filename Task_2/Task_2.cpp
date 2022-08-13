// Homework 8. Task 2.

#include <iostream>
#include <string>
#include <clocale>
#include "figure.h"
#include "triangle.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "quadrangle.h"
#include "parallelogram.h"
#include "rectangle.h"
#include "square.h"
#include "rhombus.h"
#include "bad_fig.h"
#include "print_info.h"

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    try 
    {
      Figure figure("Фигура", 0);
      print_info(&figure);
    }
    catch (const BadFig& bf)
    {
        std::cout << bf.what() << std::endl;
    }
    try
    {
        Triangle triangle("Треугольник", 10, 20, 30, 60, 40, 80);
        print_info(&triangle);
    }
    catch (const BadFig& bf)
    {
        std::cout << bf.what() << std::endl;
    }
    try
    {
        RightTriangle rightTriangle("Прямоугольный треугольник",10, 20, 30, 30, 60, 90);
        print_info(&rightTriangle);
    }
    catch (const BadFig& bf)
    {
        std::cout << bf.what() << std::endl;
    }
    try 
    {
        IsoscelesTriangle isoscelesTriangle("Равнобедренный треугольник", 10, 20, 10, 50, 60, 50);
        print_info(&isoscelesTriangle);
    }
    catch (const BadFig& bf)
    {
        std::cout << bf.what() << std::endl;
    }
    try
    {
        EquilateralTriangle equilateralTriangle("Равносторонний треугольник", 30, 30, 30, 60, 60, 60);
        print_info(&equilateralTriangle);
    }
    catch (const BadFig& bf)
    {
        std::cout << bf.what() << std::endl;
    }
    try
    {
        Quadrangle quadrangle("Четырехугольник", 10, 20, 30, 40, 50, 60, 70, 80);
        print_info(&quadrangle);
    }
    catch (const BadFig& bf)
    {
        std::cout << bf.what() << std::endl;
    }
    try
    {
        Rectangle rectangle("Прямоугольник", 10, 20, 10, 20, 50, 60, 70, 80);
        print_info(&rectangle);
    }
    catch (const BadFig& bf)
    {
        std::cout << bf.what() << std::endl;
    }
    try
    {
        Square square("Квадрат", 20, 20, 20, 20, 90, 90, 90, 90);
        print_info(&square);
    }
    catch (const BadFig& bf)
    {
        std::cout << bf.what() << std::endl;
    }
    try
    {
        Parallelogram parallelogram("Параллелограмм", 20, 30, 20, 30, 50, 60, 70, 80);
        print_info(&parallelogram);
    }
    catch (const BadFig& bf)
    {
        std::cout << bf.what() << std::endl;
    }
    try
    {
        Rhombus rhombus("Ромб", 30, 30, 30, 30, 40, 50, 40, 50);
        print_info(&rhombus);
    }
    catch (const BadFig& bf)
    {
        std::cout << bf.what() << std::endl;
    }
    return 0;
}
