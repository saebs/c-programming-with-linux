#include <stdio.h>
int main(void)
{
    int number;
    scanf("%d", &number);
    int guess;
    scanf("%d", &guess);
    int nbguess = 1;
    
    if (guess < number) {
        printf("it is more\n");
    }
    if (guess > number) {
        printf("it is less\n");
    }

    while (guess != number) {
        scanf("%d", &guess);
        if (guess < number) {
            printf("it is more\n");
        }
        if (guess > number) {
            printf("it is less\n");
        }
        nbguess++;
    }
    printf("Number of tries needed:\n%d\n", nbguess);
    return 0;
}