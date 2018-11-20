#include <stdio.h>

int min(int , int);

int main(void)
{
    int n, i;
    scanf("%d", &n);
    int numbers;
    int smallest = 0;
    for (i = 0; i < n; i++) {
        // get numbers
        scanf("%d", &numbers);
        if (i == 0)
            smallest = numbers;
        smallest = min(smallest, numbers);
    }
    printf("%d\n", smallest);
    return 0;
}

int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    } 
}
