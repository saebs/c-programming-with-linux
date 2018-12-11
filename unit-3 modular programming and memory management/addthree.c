// Modify integer with fucntion and pointers
#include <stdio.h>
void addthree(int *);
int main(void)
{
    int n = 5;
    printf("before n: %d\n", n);
    addthree(&n);
    printf("inside main n: %d\n", n);
    return 0;
}

void addthree(int * n)
{
     *n = * n + 3;
    printf("inside addthree n: %d\n", * n);
}
