#include <stdio.h>
int main(void)
{
    int height, leaflets;
    scanf("%d", &height);
    scanf("%d", &leaflets);
    if (height <= 5 && leaflets >= 8) 
    {
        printf("Tinuviel\n");
    } else if (height >=10 && leaflets >= 10)
    {
        printf("Calaelen\n");
    } else if (height <= 8 && leaflets <= 5)
    {
        printf("Falarion\n");
    } else if (height >= 12 && leaflets <= 7)
    {
        printf("Dorthonion\n");
    } else 
    {
        printf("Uncertain\n");
    }
    return 0;
}