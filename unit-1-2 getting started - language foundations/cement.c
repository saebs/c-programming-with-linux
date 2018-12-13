#include <stdio.h>
int main(void)
{
    double cement;
    const int PRICE = 45; // $ per bag
    const int WEIGHT = 120; // 120 pounds
    int cost = 0;
    scanf("%lf", &cement);
    int intCement = (int) cement;
    if (intCement% WEIGHT != 0)
    {
        cost = (intCement / WEIGHT + 1) * PRICE;
    }
    else
    {
        cost = intCement / WEIGHT * PRICE;
    }
    printf("%d", cost);
    return 0;
}
