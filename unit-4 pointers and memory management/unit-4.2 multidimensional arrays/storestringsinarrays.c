#include <stdio.h>

int main(void)
{
    char a[4];
    char b[6];
    char c[9];

    char * words[3] = {a, b, c};
    printf("Please enter a word with 3 letters: ");
    scanf("%s", a);
    printf("Please enter a word with 5 letters: ");
    scanf("%s", b);
    printf("Please enter a word with 8 letters: ");
    scanf("%s", c);
    printf("You entered: \n");
    printf("%s %s %s \n", words[0], *(words + 1), c); // methods 1 to 3
    return 0;
}