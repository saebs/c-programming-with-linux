#include <stdio.h>
int sum(int, int); // prototype
int myfunc(int);
int main(void)
{
    int x, y;
    printf("Enter two numbers successively\n");
    scanf("%d %d", &x, &y);
    int result = sum(x, y);
    printf("%d\n", result);

    int this = myfunc('a'); // nb used character literal instead, which is actually an int
    printf("%d\n", this);
    return 0;
}

int sum(int a, int b) { // definition
    printf("Starting computation\n");
    printf("Finished computation\n");
    return a + b;
}

int myfunc(int v) {
    return v + 1;
}