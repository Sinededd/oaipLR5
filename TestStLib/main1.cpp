#include <iostream>
#include <string>
#include "..\StaticLib\Header.h"


void _start();

void print_info();


void print_menu()
{
    std::cout << "1. Старт" << std::endl;
    std::cout << "2. Инфо" << std::endl;
    std::cout << "3. Закрыть" << std::endl;
}


int get_int(std::string text = "", long long start = LLONG_MIN, long long end = LLONG_MAX) {
    long long t;

    while (1) {
        std::cout << text;
        std::cin >> t;

        if (std::cin.fail() || t < start || t > end) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "  Хуйня.Переделывай " << std::endl << std::endl;
        }
        else return t;
    }
}

int main()
{
    setlocale(LC_ALL, "Ru");
    int variant;

    do
    {
        system("cls");
        print_menu();

        variant = get_int("> ", 1, 3);

        switch (variant)
        {
        case 1:
            system("cls");
            _start();
            break;
        case 2:
            system("cls");
            print_info();
            break;
        }

        if (variant != 3)
        {
            std::cout << std::endl
                << "-------------------------------------------------\n" << std::endl;
            system("pause");
        }

    } while (variant != 3);
    return 0;
}

void print_info()
{
    std::cout << "Info" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << "Выполнил Гришко Денис\n"
        << "Вариант 9\n\n";
    std::cout << "..." << std::endl;
}

void _start()
{
    int n;
    n = get_int("Введите n: ", INT_MIN, INT_MAX);
    int** a = new int * [n];
    int** b = new int * [n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
        b[i] = new int[n];
    }

    start(a, b, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << a[i][j] << " ";
        }
        std::cout << '\n';
    }
    std::cout << "~~~~~~~~~~~~~~~\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << b[i][j] << " ";
        }
        std::cout << '\n';
    }
    std::cout << "~~~~~~~~~~~~~~~\n";
    std::cout << "Сумма чётных строк a: " << sumRows(a, n, 1) << std::endl;
    std::cout << "Сумма нечётных столбцов a: " << sumColumns(a, n, 0) << std::endl;
    std::cout << "Сумма нечётных строк b: " << sumRows(b, n, 0) << std::endl;
    std::cout << "Сумма чётных столбцов b: " << sumColumns(b, n, 1) << std::endl;


    for (int i = 0; i < n; i++)
    {
        delete[] a[i];
        delete[] b[i];
    }
    delete[] a;
    delete[] b;
}