#include <stdio.h>
int main(void)
{
    int age;
    int luggage_weight;
    int price = 0;
    //i
    scanf("%d", &age);
    scanf("%d", &luggage_weight);
    if (age == 60 || age < 10) {
        if (age < 10) {
            price = 5;
        } else {
            price = 0;
        }
    } else {
        if (luggage_weight > 20) {
            price = 40;
        } else {
            price = 30;
        }
    }
    printf("%d", price);
    return 0;
}
