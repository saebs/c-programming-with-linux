#include <stdio.h>
int main(void)
{
/*     printf("5/2 = %d\n", 5 / 2);
    printf("5/2.0 = %lf\n", 5 / 2.0);
    printf("5.0/2.0 = %lf\n", 5.0 / 2.0);
    printf("5.0/2 = %lf\n", 5.0 / 2); */

    int intFive = 5;
    int intTwo = 2;
    double dFive = 5.0;
    double dTwo = 2.0;

    printf("%d\n", intFive / intTwo);
    printf("%lf\n", dFive / intTwo);
    printf("%lf\n", dFive / dTwo);
    printf("%.1lf\n", intFive / dTwo);


    return 0;
}
