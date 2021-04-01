// ProjectTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cstdio>

const char string[] = "This is a null-terminated string.";

int forloop() {
    int count = 0;

    for (char c : string) {
        if (c == 0)
            break;

        count++;
    }

    return count;
}

int whileLoop() {
    int count = 0;
    while (string[count]) {
        count++;
    }

    return count;
}


int main()
{    
    int count = forloop();
    printf("[For-Loop]The number of characters is: %d\n", count);

    count = whileLoop();
    printf("[While-Loop]The number of characters is: %d\n", count);


    return 0;
}