#include <stdio.h>
int main(void)
{
    int passengers;
    double gas_cost;
    scanf("%d %lf", &passengers, &gas_cost);
    if (passengers != 0) {
        printf("%.2lf",  (1.0 + gas_cost) / (passengers + 1));
    } else {
        printf("%.2lf", gas_cost);
    }

    return 0;
}
