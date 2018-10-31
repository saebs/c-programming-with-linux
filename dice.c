#include <stdio.h>
int main(void)
{
    int diceThrow;
    int nbthrows = 1;
    scanf("%d", &diceThrow);
    while (diceThrow != 6) {
        scanf("%d", &diceThrow);
        nbthrows++;
    }
    printf("We needed %d throws to get 6\n", nbthrows);
    return 0;
}
