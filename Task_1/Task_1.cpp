// Homework 8. Task 1.

#include <iostream>
#include <string>
#include <exception>
#include <clocale>
#include <windows.h>

class bad_length : public std::exception 
{
public:
    const char* what() const override 
    {
        return "Вы ввели слово запретной длины!";
    }
};

void getForbidenLength(int* strLength)
{
    std::cout << "Введите запретную длину: ";
    std::cin >> *strLength;
}

void getString(std::string* str)
{
    std::cout << "Введите слово: ";
    std::cin >> *str;
}

int function(std::string str, int forbidden_length) 
{
    if (str.length() == forbidden_length)
    {
        throw bad_length();
    }
    return str.length();
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int strLength = 0;
    std::string string;
    bool exit = false;
    getForbidenLength(&strLength);
    while (!exit)
    {
        getString(&string);
        try
        {
            std::cout << "Длина слова \"" << string << "\" равна " << function(string, strLength) << std::endl;
        }
        catch (const bad_length& exep)
        {
            std::cout << exep.what() << " До свидания.";
            exit = true;
        }
        catch (...)
        {
            std::cout << "Неизвестная ошибка" << std::endl;
            exit = true;
        }
    }
    return 0;
}