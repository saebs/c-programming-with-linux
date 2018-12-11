#include <stdio.h>

int main(void)
{
    int i = 42;
    double d = 32.124;
    char c = 'c';

    int * addressOfi = &i;
    double * addressOfd = &d;
    char * addressOfc = &c;

    printf("addressOfi %p, pfee %lf\n", addressOfi, (double) *addressOfi);
    printf("addressOfd %p\n", addressOfd);
    printf("addressOfc %p\n", addressOfc);
    printf("size of last %lu\n", sizeof(addressOfc));
    return 0;
}