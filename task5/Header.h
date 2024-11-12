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
int count(int** a, int n, int k);
void f(int** a, int n, int k, int* d);
double average(int* a, int n);

//main logic
void start();