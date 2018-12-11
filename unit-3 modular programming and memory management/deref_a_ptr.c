#include <stdio.h>
int main(void)
{
    // Dereference a pointer to get the value that it points to.
    double a = 42.98;
    double * addrOfa = &a;

    printf("@ address %p there is %.2lf\n", addrOfa, *addrOfa);

    char c = 'm';
    char * addrOfc = &c;

    char d = * addrOfc;
    printf("value is  %c\n", d);

    * addrOfa = 99;
    * addrOfa = *addrOfa + 1;
    printf("@ address %p there is now %.2lf\n", addrOfa, a);

    int y, * x;

    y = 1;
    x = &y;
    int * z = x;
    printf("x: %p , y: %p and %p", x, &y, z);

    return 0;
}
