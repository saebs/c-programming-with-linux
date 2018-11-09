// Bisection search require search space elements to be sorted first

#include <stdio.h>
int main(void)
{
    int list[] = {-10, -3, 2, 5, 8, 14, 77, 77, 106, 759, 900}; /* sorted list */
    // looks ideal for unique elements. in a set.
    int n = 11;
    int item;
    

    printf("Which number are you looking for: ");
    scanf("%d", &item);

    int ia, ib, midab;
    ia = 0;
    ib = n-1;
    int found = 0;

    while (!found && (ia <= ib)) { // the second condition is crucial to avoid a b overlapping 
        midab = (ia + ib) / 2;
        if (item == list[midab]) {
            found = 1;
        } else if (item < list[midab]) {
            ib = midab - 1; // tossing upper half  AND  midab + 1 if ordered in descending order.
        } else {
            ia = midab + 1; // discard lower half
        }
    }
    if (!found) {
        printf("item %d not found, nada , waxe!!\n", item);
    } else {
        printf("item %d found at %d\n", item, midab);
    }

    return 0;
}
