#include <stdio.h>
int main(void)
{
    int hrs;
    scanf("%d", &hrs);
    int price = 10 + hrs * 5;
    if (price < 53) {
        printf("%d", price);
    } else {
        printf("%d", 53);
    }

    return 0;
}
