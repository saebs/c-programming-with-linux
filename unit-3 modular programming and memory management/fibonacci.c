#include <stdio.h>
int fibo(int);
int main(void)
{
    printf("Which fibonacci number do you need?\n");
    int fib, nth;
    scanf("%d", &nth);
    if (nth <= 0) {
        printf("REquested number %d invalid, aborting!\n", nth); 
    } else {
        fib = fibo(nth);
    }
    printf("fibonacci number %d is %d\n",nth,fib);
    return 0;
}

int fibo(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    return fibo(n - 1) + fibo(n - 2);
}
