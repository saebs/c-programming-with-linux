#include <stdio.h>
int main(void)
{
    int cars;
    scanf("%d", &cars);
    double weight_mods[cars];
    double car_weighs = 0.00;
    for (int i = 0; i < cars; i++) 
    {
        scanf("%lf", &car_weighs);
        // printf("c: %lf\n", car_weighs);
        weight_mods[i] = 22.0 - car_weighs;
        // printf("w: %lf\n", weight_mods[i]);
    }
    
    for (int j = 0; j < cars; j++)
    {
        printf("%.1lf\n", weight_mods[j]);
    }

    return 0;
}
