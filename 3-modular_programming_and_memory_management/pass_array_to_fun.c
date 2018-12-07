#include <stdio.h>

void reset(int *);
int main(void)
{
    int arr[3] = {15, 16, 17};
    for (int i = 0; i < 3; i++)
        printf("%d ", arr[i] );
    reset(arr);
    printf("\nreset\n");
    for (int i = 0; i < 3; i++)
        printf("%d ", arr[i] );
    printf("\n");

    return 0;
}

void reset(int  ptr[])
{
    *ptr = 0;
    *(ptr + 1) = 0;
    *(ptr + 2) = 0;
    ptr[2] = 0; // Same same lat notation bracket vs pointers
}
