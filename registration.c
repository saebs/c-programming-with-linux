#include <stdio.h>
int main(void)
{
    char name[50];
    scanf("%s", name);
    int i = 0;
    while (name[i] != '\0')
    {
        i++;
    }
    if (i % 2 == 0){
        printf("%d\n", 1);
    } else {
        printf("%d\n", 2);
    }
    return 0;
}
