#include <iostream>
#include "print_info.h"

void print_info(Figure* fig)
{
    std::cout << fig->getName() << " ";
    fig->print();
    std::cout << " " << "cоздан." << std::endl;
}