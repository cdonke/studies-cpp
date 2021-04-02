// ProjectTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdio>

void first_try() {
	for (int i = 2; i < 100; i++) {
		int divisores = 0;
		for (int j = i; j > 1; j--) {
			if (i % j == 0)
				divisores++;
		}

		if (divisores == 1)
			printf("Prime %i\n", i);
	}
}
int main()
{
	puts("First try:");
	first_try();
	puts("");

	return 0;
}