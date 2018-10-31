#include <stdio.h>
int main(void)
{
    double money, price;
    scanf("%lf", &money);
    scanf("%lf", &price);
    printf("%d", (int) (money / price)); // most books your money can buy

    return 0;
}
