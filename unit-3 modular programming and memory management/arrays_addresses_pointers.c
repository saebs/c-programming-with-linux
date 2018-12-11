#include <stdio.h>
int main(void)
{
    int arr[3] = {10, 11, 12};
    printf("%p\n", arr); // So an array is essentially just a pointer to the first element.

    int * ptr = arr;
    printf("element 1 original state %d\n", * ptr);
    * ptr = 98; // we have cdhanges first element, buthow to change next one?
    printf("element 1 changed state %d\n",  ptr[0]);
    // Thats whre pointer arithmetic comes in;

    printf("element 2 before %d\n", arr[1]);
    * (ptr + 1) = 99; // mod second element
    printf("element 2 now %d\n ", arr[1]);
    printf("element 3 before %d\n ", arr[2]);
    * (ptr + 2) = 100; // mod last element
    printf("element 3 now %d\n ", arr[2]);
    //  * (ptr + 3) = 404; // seg fault will occur


    return 0;
}
