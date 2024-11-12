#pragma once

//print text
void print_menu();
void print_info();

//input
void pause(std::string message = "");
long long getRow_int(std::string text = "", long long start = LLONG_MIN, long long end = LLONG_MAX);
long long getOne_int(std::string text = "", long long start = LLONG_MIN, long long end = LLONG_MAX);
double getOne_double(std::string text = "", double start = -DBL_MAX, double end = DBL_MAX);
double getRow_double(std::string text = "", double start = -DBL_MAX, double end = DBL_MAX);


//functions
int countZero(double** a, int n, int k);
void indexZero(double** a, int n, int k, int* x, int* y);
void reverseMat(double** a, int n, int k);

//main logic
void start();