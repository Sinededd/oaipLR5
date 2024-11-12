#include <iostream>
#include "Header.h"

void start()
{
    int n = getOne_int("n: ", 1, INT_MAX);
    int k = getOne_int("k: ", 1, INT_MAX);
    double** a = new double* [n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new double[k];
        for (int j = 0; j < k; j++)
        {
            a[i][j] = getRow_double();
        }
    }


    std::cout << "=======================\n";
    int cZero = countZero(a, n, k);
    std::cout << "Количество 0: " << cZero << '\n';
    int* x = new int[cZero];
    int* y = new int[cZero];
    indexZero(a, n, k, x, y);

    for (int i = 0; i < cZero; i++)
    {
        std::cout << i << ": (" << x[i] << ", " << y[i] << ")\n";
    }
    std::cout << "=======================\n";
    reverseMat(a, n, k);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            std::cout << a[i][j] << '\t';
        }
        std::cout << '\n';
    }


    for (int i = 0; i < n; i++)
    {
        delete[] a[i];
    }
    delete[] a;
    pause();
}