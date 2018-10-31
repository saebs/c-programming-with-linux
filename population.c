#include <stdio.h>
int main(void)
{
    int population;
    double growth;
    scanf("%d", &population);
    scanf("%lf", &growth);
    printf("%d", (int) (population + population * growth /100));
    return 0;
}
