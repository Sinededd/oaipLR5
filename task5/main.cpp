#include <iostream>
#include "Header.h"



int main()
{
    setlocale(LC_ALL, "Ru");
    int variant;

    do
    {
        system("cls");
        print_menu();

        variant = getOne_int("> ", 1, 3);

        switch (variant)
        {
        case 1:
            system("cls");
            start();
            break;
        case 2:
            system("cls");
            print_info();
            break;
        }

        if (variant != 3)
        {
            std::cout << std::endl
                << "-------------------------------------------------" << std::endl;
            pause("Press eny key");
        }

    } while (variant != 3);
    return 0;
}