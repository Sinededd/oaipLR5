#include <iostream>
#include <Windows.h>

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
    HINSTANCE load;
    load = LoadLibrary(L"DynamicLib.dll");
    typedef double (*pr)(double*, double*);
    pr Pr = (pr)GetProcAddress(load, "product");


    int n;
    std::cin >> n;
    double* a = new double[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    double p = Pr(a, a + n);
    std::cout << p;


    FreeLibrary(load);
    delete[] a;
}