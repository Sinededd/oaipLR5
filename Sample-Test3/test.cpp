
#include "pch.h"


TEST(count, 1) {
	int n = 3;
	int k = 3;
	int** a = new int* [n];
	a[0] = new int[k] {1, 2, 3};
	a[1] = new int[k] {4, 4, 6};
	a[2] = new int[k] {7, 8, 10};
	EXPECT_EQ(count(a, n, k), 2);


	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
}

TEST(count, 2) {
	int n = 1;
	int k = 1;
	int** a = new int* [n];
	a[0] = new int[k] {5};
	EXPECT_EQ(count(a, n, k), 0);


	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
}


TEST(f, 1) {
	int n = 3;
	int k = 3;
	int** a = new int* [n];
	a[0] = new int[k] {1, 2, 3};
	a[1] = new int[k] {4, 4, 6};
	a[2] = new int[k] {7, 8, 10};

	int c = count(a, n, k);
	int* x{ new int[c] {4, 10} };
	int* xCur = new int[c];
	long long prod = f(a, n, k, xCur);

	for (int i = 0; i < c; i++)
	{
		EXPECT_EQ(x[i], xCur[i]);
	}
	EXPECT_EQ(prod, 40);

	delete[] x;
	delete[] xCur;
	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
}

TEST(f, 2) {
	int n = 1;
	int k = 1;
	int** a = new int* [n];
	a[0] = new int[k] {5};

	int c = count(a, n, k);
	int* x{ new int[c] {} };
	int* xCur = new int[c];
	long long prod = f(a, n, k, xCur);

	for (int i = 0; i < c; i++)
	{
		EXPECT_EQ(x[i], xCur[i]);
	}
	EXPECT_EQ(prod, 1);

	delete[] x;
	delete[] xCur;
	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
}