#include <stdio.h>
int main(void)
{
    int quantities[10];
    int id, grams;
    int i;
    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &grams);
        quantities[i] = grams;
    }
    scanf("%d", &id);
    printf("%d", quantities[id]);
    return 0;
}
