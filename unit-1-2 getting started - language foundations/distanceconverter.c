#include <stdio.h>
int main(void)
{
    const double MILE = 0.621371;
    double km;
    scanf("%lf", &km);
    printf("%lf", km * MILE);
    return 0;
}
