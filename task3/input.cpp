#include <iostream>
#include <string>

void pause(std::string message)
{
    std::cout << message << std::endl;
    char a;
    a = std::cin.get();
    while (a != '\n')
    {
        a = std::cin.get();
    }
    return;
}

long long getRow_int(std::string text, long long start, long long end) 
{
    long long t;

    while (1) {
        std::cout << text;
        std::cin >> t;

        if (std::cin.fail() || t < start || t > end) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Incorrect input. Try again" << std::endl << std::endl;
        }
        else return t;
    }
}

double getRow_double(std::string text, double start, double end)
{
    double t;

    while (1) {
        std::cout << text;
        std::cin >> t;

        if (std::cin.fail() || t < start || t > end) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Incorrect input. Try again" << std::endl << std::endl;
        }
        else return t;
    }
}

double getOne_double(std::string text, double start, double end)
{
    double variant;
    std::string s;
    std::cout << text;
    getline(std::cin, s);

    char* endPtr;
    variant = strtold(s.c_str(), &endPtr);
    while (errno == ERANGE || s.empty() || endPtr != &(s.back()) + 1 || variant < start || variant > end)
    {
        errno = 0;
        if (!s.empty())
        {
            std::cout << "Incorrect input. Try again" << std::endl << std::endl; // выводим сообщение об ошибке
        }
        std::cout << text;
        getline(std::cin, s); // считываем строку повторно
        variant = strtod(s.c_str(), &endPtr);
    }

    return variant;
}

long long getOne_int(std::string text, long long start, long long end)
{
    long long variant;
    std::string s = "";
    std::cout << text;
    getline(std::cin, s);

    char* endPtr;
    variant = strtoll(s.c_str(), &endPtr, 0);
    while (errno == ERANGE || s.empty() || endPtr != &(s.back()) + 1 || variant < start || variant > end)
    {
        errno = 0;
        if (!s.empty())
        {
            std::cout << "Incorrect input. Try again" << std::endl << std::endl; // выводим сообщение об ошибке
        }
        std::cout << text;
        getline(std::cin, s); // считываем строку повторно
        variant = strtoll(s.c_str(), &endPtr, 0);
    }

    return variant;
}