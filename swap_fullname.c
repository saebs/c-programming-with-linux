#include <stdio.h>

int main(void) 
{
    int n, i;
    char first[101], last[101];
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
       scanf("%s %s", first , last);
       printf("%s %s\n", last, first);
    }

    return 0;
}