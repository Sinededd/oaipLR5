int count(int** a, int n, int k)
{
    int dN = (n < k ? n : k);
    int evenN = 0;
    for (int i = 0; i < dN; i++)
    {
        if (a[i][i] % 2 == 0)
            evenN++;
    }
    return evenN;
}

long long f(int **a, int n, int k, int *arrD)
{
    int dN = (n < k ? n : k);
    long long prod = 1;
    for (int i = 0, j = 0; i < dN; i++)
    {
        if (a[i][i] % 2 == 0)
        {
            arrD[j] = a[i][i];
            prod *= arrD[j];
            ++j;
        }
    }
    return prod;
}