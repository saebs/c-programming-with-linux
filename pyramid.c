#include <stdio.h>

int main(void)
{
    char in;
    scanf("%c", &in);
    printf("++++%c++++\n", in);
    printf("+++%c%c%c+++\n", in, in, in);
    printf("++%c%c%c%c%c++\n", in, in, in, in, in);
    printf("+%c%c%c%c%c%c%c+\n", in, in , in, in , in, in, in);
    printf("%c%c%c%c%c%c%c%c%c\n", in, in , in, in, in, in, in, in, in);
    return 0;
}