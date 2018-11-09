#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    double ppp[n]; // =  {9.90, 5.50, 12.0, 15.0 }; // price per pund
    // double measurements[n]; // = {0.250, 1.5, 0.30, 1.0 };
    double total = 0;
    int i,j, k;
    double price, measurement;

    for (i = 0; i < n; i++)
    {
        scanf("%lf", &price);
        ppp[i] = price; 
    }

    for (j = 0; j < n; j++)
    {
        scanf("%lf", &measurement);
        total = total + ppp[j] * measurement;
    }
    printf("%lf", total);

    return 0;
}
