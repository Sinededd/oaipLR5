#include <iostream>
#include "Header.h"

void start()
{
    int n = getOne_int("n: ", 1, INT_MAX);
    int k = getOne_int("k: ", 1, INT_MAX);
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[k];
        for (int j = 0; j < k; j++)
        {
            a[i][j] = getRow_double();
        }
    }

    
    int dN = count(a, n, k);
    int* arrD;
    long long prod;
    
    arrD = new int[dN+1] {};
    prod = f(a, n, k, arrD);
    if (dN == 0)
    {
        prod = 0;
    }

    std::cout << "=======================\n";
    for (int i = 0; i < dN; i++)
    {
        std::cout << arrD[i] << " ";
    }
    std::cout << "\nПроизведение: " << prod;

    delete[] arrD;
    for (int i = 0; i < n; i++)
    {
        delete[] a[i];
    }
    delete[] a;
    pause();
}