#include <stdio.h>

void funky(int foo);

int main(void)
{
    int a = 10;
    int b = 11;
    funky(b);
    int f = 14;
    int g = 15;
    printf("f: %d\n", f);
    printf("g: %d\n", g);

    return 0;
}


void funky(int foo) {
    int a = 0;
    int b = 17;
        int c = 12;
        int d = 13;
        int e = a + c;
        c = b + d;
        printf("c: %d\n", c);
        printf("e: %d\n", e);
}