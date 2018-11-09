#include <stdio.h>

int main(void)
{
    char l1, l2;
    char l3, l4;
    char l5, l6;
    // printf("Please enter two consecutive letters :");
    // scanf("%c%c", &l1, &l2); //consecutive characters
    // printf("1 read characters %c and %c\n", l1, l2);

    // printf("Please enter two comma sepereated letters :");
    // scanf("%c,%c", &l3, &l4); // comma seperated characters
    // printf("2 read characters %c and %c\n", l3, l4);

    printf("Please enter two space seperated letters :");
    scanf("%c %c", &l5, &l6); // space seperated
    printf("3 read characters %c and %c\n", l5, l6);


    return 0;
}