#include <stdio.h>
int main(void)
{
    // estimates epidemic spread

    int population;
    int day = 0;
    int infected = 1;
    scanf("%d", &population);
    while (infected < population) {
        day++;
        infected *= 2;
    }
    printf("%d\n", day);
    return 0;
}
