#include <stdio.h>
// #include <assert.h>

int main(void)
{
    /* code */
    int robots_to_deploy, height, weight, power, resistance, total_army_power = 0;
    // printf("How many robots to deploy \n");
    scanf("%d", &robots_to_deploy);

    for (int i = 0; i < robots_to_deploy; i++)
    {
        scanf("%d %d %d %d", &height, &weight, &power, &resistance);
        total_army_power = total_army_power + ((power + resistance) * (weight - height));
    }
    printf("%d", total_army_power);
    if (total_army_power != 163)
    {
        printf("FAIL!\n");
    }
    return 0;
}

