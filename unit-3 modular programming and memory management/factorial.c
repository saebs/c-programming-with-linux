#include <stdio.h>
int fact(int);
int main(void)
{
    int n;
    scanf("%d", &n);
    int ans = fact(n);
    printf("%d\n", ans);
    return 0;
}

int fact(int n){
    if (n == 0) {
        return 1;
    }

    return n * fact(n -1);
}
