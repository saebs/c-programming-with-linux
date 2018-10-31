#include <stdio.h>
int main(void)
{
    double d; 
    printf("How tall are you? ");
    scanf("%lf", &d);
    printf("I'm approximately %.2lf meters tall\n", d);
    return 0;
}