#include <stdio.h>

int main(void)
{
    char words[3][10];
    printf("Please enter three words: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", words[i]);
    }
    printf("You entered: ");
    for (int j = 0; j < 3; j++)
    {
        printf("%s ", words[j]);
    }
    printf("\n");
    printf("First Letters\n");
    for (int k = 0; k < 3; k++)
    {
        printf("\"%s\" starts with \'%c\' \n", words[k], words[k][0]);
    }
    return 0;
}