// ProjectTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
#include "factorial.h"

int main()
{
	int n;
	puts("Enter number to calculate factorial:");
	std::cin >> n;

	Factorial<int> factorial;
	long fact = factorial.Calculate(n);

	printf("%i! = %li\n", n, fact);

	return 0;
}
