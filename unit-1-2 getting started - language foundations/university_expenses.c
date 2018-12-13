#include <stdio.h>
int main(void)
{

    int expense =0 ;
    int expenses = 0;
    while (expense != -1) {
        expenses = expenses + expense;
        scanf("%d", &expense);
    }
    printf("%d\n", expenses);
    return 0;
}
