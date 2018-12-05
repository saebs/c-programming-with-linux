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

    return 0;
}
