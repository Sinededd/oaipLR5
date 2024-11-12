int countZero(double** a, int n, int k)
{
	int c = 0;
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < k; j++)
		{
			if (a[i][j] == 0)
				++c;
		}
	}
	return c;
}

void indexZero(double** a, int n, int k, int* x, int* y)
{
	for (int i = 0, p = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (a[i][j] == 0)
			{
				x[p] = i;
				y[p] = j;
				++p;
			}
		}
	}
}

void reverseMat(double** a, int n, int k)
{
	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < k / 2; j++)
		{
			int buf = a[i][j];
			a[i][j] = a[n - i - 1][k - j - 1];
			a[n - i - 1][k - j - 1] = buf;
		}
	}
}