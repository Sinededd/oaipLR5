#include "pch.h"


TEST(count, 1) {
	int n = 3;
	int k = 3;
	double** a = new double* [n];
	a[0] = new double[k] {1, 2, 0};
	a[1] = new double[k] {4, 0, 6};
	a[2] = new double[k] {7, 8, 0};
	EXPECT_EQ(countZero(a, n, k), 3);


	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
}

TEST(count, 2) {
	int n = 1;
	int k = 1;
	double** a = new double* [n];
	a[0] = new double[k] {5};
	EXPECT_EQ(countZero(a, n, k), 0);


	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
}


TEST(index, 1) {
	int n = 3;
	int k = 3;
	double** a = new double* [n];
	a[0] = new double[k] {1, 2, 0};
	a[1] = new double[k] {4, 0, 6};
	a[2] = new double[k] {7, 8, 0};

	int c = countZero(a, n, k);
	int* x{ new int[c] {0, 1, 2} };
	int* y{ new int[c] {2, 1, 2} };
	int* xCur =  new int[c];
	int* yCur =  new int[c];
	indexZero(a, n, k, xCur, yCur);
	
	for (int i = 0; i < c; i++)
	{
		EXPECT_EQ(x[i], xCur[i]);
		EXPECT_EQ(y[i], yCur[i]);
	}


	delete[] x;
	delete[] y;
	delete[] xCur;
	delete[] yCur;
	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
}

TEST(index, 2) {
	int n = 1;
	int k = 1;
	double** a = new double* [n];
	a[0] = new double[k] {0};

	int c = countZero(a, n, k);
	int* x{ new int[c] { 0 } };
	int* y{ new int[c] { 0 } };
	int* xCur = new int[c];
	int* yCur = new int[c];
	indexZero(a, n, k, xCur, yCur);

	for (int i = 0; i < c; i++)
	{
		EXPECT_EQ(x[i], xCur[i]);
		EXPECT_EQ(y[i], yCur[i]);
	}


	delete[] x;
	delete[] y;
	delete[] xCur;
	delete[] yCur;
	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
}