#include "pch.h"

TEST(transpon, 1) {
	int n = 3;
	int** a = new int* [n];
	a[0] = new int[n] {1, 2, 3};
	a[1] = new int[n] {4, 5, 6};
	a[2] = new int[n] {7, 8, 9};

	int** b = new int* [n];
	for (int i = 0; i < n; i++)
		b[i] = new int[n];


	int** ans = new int* [n];
	ans[0] = new int[n] {1, 4, 7};
	ans[1] = new int[n] {2, 5, 8};
	ans[2] = new int[n] {3, 6, 9};
	
	transpon(a, b, n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			EXPECT_EQ(ans[i][j], b[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
	for (int i = 0; i < n; i++)
		delete[] b[i];
	delete[] b;
	for (int i = 0; i < n; i++)
		delete[] ans[i];
	delete[] ans;
}


TEST(transpon, 2) {
	int n = 1;
	int** a = new int* [n];
	a[0] = new int[n] {1};

	int** b = new int* [n];
	for (int i = 0; i < n; i++)
		b[i] = new int[n];


	int** ans = new int* [n];
	ans[0] = new int[n] {1};

	transpon(a, b, n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			EXPECT_EQ(ans[i][j], b[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
	for (int i = 0; i < n; i++)
		delete[] b[i];
	delete[] b;
	for (int i = 0; i < n; i++)
		delete[] ans[i];
	delete[] ans;
}


TEST(sumRow, 1) {
	int n = 3;
	int** a = new int* [n];
	a[0] = new int[n] {1, 2, 3};
	a[1] = new int[n] {4, 5, 6};
	a[2] = new int[n] {7, 8, 9};

	EXPECT_EQ(sumRows(a, n, 0), 30);

	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
}


TEST(sumRow, 2) {
	int n = 1;
	int** a = new int* [n];
	a[0] = new int[n] {1};

	EXPECT_EQ(sumRows(a, n, 0), 1);

	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
}


TEST(sumColumn, 1) {
	int n = 3;
	int** a = new int* [n];
	a[0] = new int[n] {1, 2, 3};
	a[1] = new int[n] {4, 5, 6};
	a[2] = new int[n] {7, 8, 9};

	EXPECT_EQ(sumColumns(a, n, 0), 30);

	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
}


TEST(sumColumn, 2) {
	int n = 1;
	int** a = new int* [n];
	a[0] = new int[n] {1};

	EXPECT_EQ(sumColumns(a, n, 0), 1);

	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
}