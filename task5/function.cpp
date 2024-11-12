int count(int** a, int n, int k)
{
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < k; j += 2)
        {
            if (a[i][j] % 2 == 1)
                ++counter;
        }
    }
    return counter;
}


void f(int** a, int n, int k, int* d)
{
    for (int i = 0, p = 0; i < n; i++)
    {
        for (int j = 1; j < k; j += 2)
        {
            if (a[i][j] % 2 == 1)
            {
                d[p] = a[i][j];
                ++p;
            }
        }
    }
}

double average(int* a, int n)
{
    double s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }
    return s / n;
}