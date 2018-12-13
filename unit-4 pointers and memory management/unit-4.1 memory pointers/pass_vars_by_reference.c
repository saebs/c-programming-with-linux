#include <stdio.h>

void add(int, int, int *);

int main() {

    int v1, v2, sum;
    printf("Please enter two integers:\n");
    scanf("%d %d", &v1, &v2);
    add(v1, v2, &sum);
    printf("%d + %d = %d\n",v1, v2, sum);
    return 0;
}

void add(int x, int y, int * z)
{
    *z = x + y;
    printf("Added and updated ...\n");
}