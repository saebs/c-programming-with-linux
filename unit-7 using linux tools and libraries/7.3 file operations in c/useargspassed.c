#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

    int i, whole;
    double decimal;
    printf("%d arguments", argc);
    for (i = 0; i < argc; i++)
        printf(" arg %d  -> %s\n",i, *(argv + i));

    if (argc == 4)
    {
        if (strcmp(argv[1], "-e") == 0)
        {
            printf("arg[1] is equal to -e\n");
        }
        else
        {
            printf("arg[1] in not equal to -e\n");
        }

        whole = atoi(argv[2]);
        printf("%s as an integer is %d\n", argv[2],  whole);
        decimal = atof(argv[3]);
        printf("%s as a double is %lf\n", argv[3], decimal);
    }

    return 0;
}