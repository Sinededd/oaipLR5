#include "pch.h"


TEST(count, 1) {
  int n = 3;
  int k = 3;
  int** a = new int* [n];
  a[0] = new int[k] {1, 2, 3};
  a[1] = new int[k] {4, 5, 6};
  a[2] = new int[k] {7, 8, 9};
  EXPECT_EQ(count(a, n, k), 1);

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

TEST(arr, 1) {
	int n = 3;
	int k = 3;
	int** a = new int* [n];
	a[0] = new int[k] {1, 2, 3};
	a[1] = new int[k] {4, 5, 6};
	a[2] = new int[k] {7, 8, 9};

	int dn = count(a, n, k);
	int* d = new int[dn];
	f(a, n, k, d);
	

	int *b{ new int[dn]{ 5 } };
	for (int i = 0; i < dn; i++)
	{
		EXPECT_EQ(b[i], d[i]);
	}
	

	delete[] d;
	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
}

TEST(arr, 2) {
	int n = 3;
	int k = 4;
	int** a = new int* [n];
	a[0] = new int[k] {1, 2, 3, 4};
	a[1] = new int[k] {4, 5, 6, 3};
	a[2] = new int[k] {7, 8, 9, 1};


	int dn = count(a, n, k);
	int* d = new int[dn];
	f(a, n, k, d);


	int* b{ new int[3] { 5, 3, 1 } };

	for (int i = 0; i < dn; i++)
	{
		EXPECT_EQ(b[i], d[i]);
	}


	delete[] d;
	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
}