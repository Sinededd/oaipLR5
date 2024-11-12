#include "pch.h"

TEST(Test, 1) {
	HINSTANCE load;
	load = LoadLibrary(L"DynamicLib.dll");
	typedef double (*pr)(double*, double*);
	pr Pr = (pr)GetProcAddress(load, "product");

	int n = 3;
	double *a = new double[n] {2, 2, 3};

	double p = Pr(a, a + n);
	EXPECT_EQ(p, 1.9871412706612375);

	delete[] a;
}

TEST(Test, 2) {
	HINSTANCE load;
	load = LoadLibrary(L"DynamicLib.dll");
	typedef double (*pr)(double*, double*);
	pr Pr = (pr)GetProcAddress(load, "product");

	int n = 10;
	double* a = new double[n] {2, 2, 3, 100, -1, 7, 8, 1, 1, 0};

	double p = Pr(a, a + n);
	EXPECT_EQ(p, 0.037490744678960478);


	delete[] a;
}

TEST(Test, 3) {
	HINSTANCE load;
	load = LoadLibrary(L"DynamicLib.dll");
	typedef double (*pr)(double*, double*);
	pr Pr = (pr)GetProcAddress(load, "product");

	int n = 3;
	double* a = new double[n] {1};

	double p = Pr(a, a + n);
	EXPECT_EQ(p, 0.30116867893975674);


	delete[] a;
}

TEST(Test, 4) {
	HINSTANCE load;
	load = LoadLibrary(L"DynamicLib.dll");
	typedef double (*pr)(double*, double*);
	pr Pr = (pr)GetProcAddress(load, "product");

	int n = 1;
	double* a = new double[n] {1e300};

	double p = Pr(a, a + n);
	EXPECT_EQ(p, -0.24249580015835948);

	delete[] a;
}