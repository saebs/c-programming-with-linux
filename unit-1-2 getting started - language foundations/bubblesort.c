#include <stdio.h>
// This shit algorithm is not recommended in production code.
int main(void)
{
    int list[] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5}; /* unsorted list */
    int i, j , k;
    int n = 10;
    int temp;

    // sorting smallest to largest element 
    printf("unsorted: ");
    for (j = 0; j < n; j++){
        printf("%d ", list[j]);
    }
    printf("\n");

// its running time is O(n^2) ... slooooow
    for (j = 0; j < n; j++){
        for (i = 0; i < n-1; i++){
            if (list[i] > list[i+1]) {
                temp = list[i];
                list[i] = list[i+1];
                list[i+1] = temp;
            }
        }
    }

    printf("sorted : ");
    for (i = 0; i < n; i++){
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
}
