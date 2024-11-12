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

    

    int counter = count(a, n, k);
    int* d = new int[counter + 10] {};
    f(a, n, k, d);
    

    std::cout << "=======================\n";
    for (int i = 0; i < counter; i++)
    {
        std::cout << d[i] << " ";
    }
    std::cout << "\nÑðåäíåå àðôì: " << average(d, counter);


    delete[] d;
    for (int i = 0; i < n; i++)
    {
        delete[] a[i];
    }
    delete[] a;
    pause();
}