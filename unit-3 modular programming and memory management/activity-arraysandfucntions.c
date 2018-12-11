#include <stdio.h>

void reverseArray(int *);
void swap(int *, int *);

int main(void)
{
    // read 6 integers from input into array
    int sixintegers[6], number , i;

    for (i = 0; i < 6; i++)
    {
        scanf("%d", &number);
        sixintegers[i] = number;
    }

    reverseArray(sixintegers);
    // display reversed array

    printf("%d %d %d %d %d %d\n", sixintegers[0], sixintegers[1], sixintegers[2], sixintegers[3], sixintegers[4], sixintegers[5] );
    return 0;
}

    // reverse array ie 1 and last, 2nd and 2nd last, 3rd and 3rd last
void reverseArray(int * array)
{
    // to do
    // swap i and 5-i
    int i;
    for (i=0; i < 3; i++)
    {
        swap(&array[i], &array[5 - i]); // address so that we change values
    }

}
//helper function
void swap(int * a, int * b)
{
    int tmp = * a;
    * a =  * b;
    * b = tmp;

}