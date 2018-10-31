#include <stdio.h>
int main(void)
{
    int ncities;
    scanf("%d", &ncities);
    int popn;
    int i;
    int found = 0;
    for (i = 0; i < ncities; i++)
    {
        scanf("%d", &popn);
        if (popn > 10000) 
            found++;

    } 
    printf("%d", found);

    return 0;
}
