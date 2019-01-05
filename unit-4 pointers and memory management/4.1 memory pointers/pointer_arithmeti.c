#include <stdio.h>
int main(void)
{
    int arr[] = {6, 2, -4, 8, 5, 1};
    // Note: arr == &arr[0]
    printf("Array contains %d %d .. %d\n", arr[0], arr[1], arr[5]);
    printf("These are stored at %p %p and %p\n", arr, arr + 1 , &arr[5]);

    int * ptr = arr;
    printf("%d ", * ptr);
    printf("%d", *(ptr + 178));

    return 0;
}