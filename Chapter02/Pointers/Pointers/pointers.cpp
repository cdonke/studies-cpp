// pointers.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <cstdio>

int main()
{
    int x = 7;
    int y = 42;
    int * ip = &x;

    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);

    puts("Changed x to 73");
    x = 73;
    printf("The value of *ip is %d\n", *ip); // still the value of x
    
    puts("Changed ip to &y");
    ip = &y;
    printf("The value of *ip is %d\n", *ip); // now the value of y

    puts("Changed y to 20");
    y = 20;
    printf("The value of *ip is %d\n", *ip); // now the value of y

    return 0;
}
