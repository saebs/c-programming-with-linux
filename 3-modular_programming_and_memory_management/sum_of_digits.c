#include <stdio.h>
int sod(int);
int main(void)
{
    int number;
    scanf("%d", &number);
    printf("%d\n", sod(number)) ;
    return 0;
}

int sod(int d) {
    if (d == 0) return 0;
    return d%10 + sod(d/10);
}
