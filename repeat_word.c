#include <stdio.h>
int main(void)
{
    char word[101];
    int reps;
    scanf("%d %s",&reps, word);
    int i;
    for (i = 0; i < reps; i++) {
        printf("%s\n", word);
    }
    return 0;
}
