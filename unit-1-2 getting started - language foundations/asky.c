#include <stdio.h>
int main(void)
{
    int age;
    double height;
    printf("Age and Height?: ");
    // with one scanf statement
    scanf("%d %lf", &age, &height);
    printf("You are %d y ears old and %.1lf meters tall ? fq outta here\n", age, height);

    return 0;
}
