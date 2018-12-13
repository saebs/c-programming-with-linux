#include <stdio.h>
int main(void)
{
    int n, g, grades;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &g);
        grades = grades + g;
    } 
    printf("%.2lf", (double) grades / n);
    return 0;
}
