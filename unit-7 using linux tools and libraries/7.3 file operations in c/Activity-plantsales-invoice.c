#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int nplants;
    double ppplant, total_price;
    if (argc != 3)
        printf("Invalid input.\n");
    else
    {
        nplants = atoi(argv[1]);
        ppplant = atof(argv[2]);
        total_price = nplants * ppplant;
        printf("%d plants for %.2lf dollars each cost %.2lf dollars.\n", nplants, ppplant, total_price);
    }
    return 0;
}