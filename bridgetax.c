#include <stdio.h>
int main(void)
{
    int die_val1, die_val2;
    scanf("%d", &die_val1);
    scanf("%d", &die_val2);
    int sum = die_val1 + die_val2;
    if (sum >= 10) {
        printf("Special tax\n");
        printf("%d", 36);
    }  else {
        printf("Regular tax\n");
        printf("%d", 2 * sum);
    }
    return 0;
}
