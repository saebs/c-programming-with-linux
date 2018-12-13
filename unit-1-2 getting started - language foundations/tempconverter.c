#include <stdio.h>
int main(void)
{
    double celcius;
    scanf("%lf", &celcius);
    printf("%.1lf", celcius * 9.0 /5.0 + 32.0 );
    return 0;
}
