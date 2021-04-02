// ProjectTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int first_try(int n) {
	int fact = n;
	for (int i = n - 1; i > 1; i--) {
		fact *= i;
	}

	return fact;
}
int second_try(int n) {
	unsigned long fact = n;

	while (n > 1) {
		fact *= --n;
	}

	return fact;
}

int main()
{
	int n;
	puts("Enter number to calculate factorial:");
	std::cin >> n;

	int fact = first_try(n);
	printf("%i! = %i\n",n, fact);

	fact = second_try(n);
	printf("%i! = %i\n", n, fact);
}
