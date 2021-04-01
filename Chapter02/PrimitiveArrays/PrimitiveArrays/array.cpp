// array.cpp by Bill Weinman [bw.org]
// updated 2020-07-07
#include <cstdio>

int main()
{
    int array[] = { 1, 2, 3, 4, 5 };

    int x = array[2];
    printf("x is %d\n", x);

    x = 10;
    printf("x is %d\n", x);

    int* ip = &array[2];
    printf("ip is %d\n", *ip);

    *ip = 10;

    for(int i : array) {
        printf("%d ", i);
    }
    puts("");


    return 0;
}
