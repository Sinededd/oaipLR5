void transpon(int** a, int** b, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[i][j] = a[j][i];
		}
	}
}

long long sumRows(int **a, int n, bool st = 0)
{
	long long s = 0;
	for (int i = st; i < n; i+=2)
	{
		for (int j = 0; j < n; j++)
		{
			s += a[i][j];
		}
	}
	return s;
}

long long sumColumns(int** a, int n, bool st = 0)
{
	long long s = 0;
	for (int i = st; i < n; i += 2)
	{
		for (int j = 0; j < n; j++)
		{
			s += a[j][i];
		}
	}
	return s;
}

void start(int** a, int** b, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i <= 5)
			{
				a[i][j] = i * j * j - 2 * j;
			}
			else
			{
				a[i][j] = 3 * i * j - 3;
			}
		}
	}

	transpon(a, b, n);
}