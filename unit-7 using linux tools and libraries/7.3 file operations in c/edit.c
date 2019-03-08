#include <stdio.h>

int main()
{
    int num;
    FILE *oufile;
    char *filename = "grades.txt";
    oufile = fopen(filename, "r");

    int selection = 1;
    if (oufile != NULL)
    {
        printf("You already have a file named %s\n", filename);
        printf("do you want to : \n1. Append\n2. Overwrite\n");
        scanf("%d", &selection);
    }

    if (selection == 1)
    {
        oufile = fopen(filename, "a");
    }
    else
    {
        oufile = fopen(filename, "w");
    }

    do
    {
        printf("Enter number or -1 to exit\n");
        scanf("%d", &num);
        if (num != -1)
            fprintf(oufile, "%d ", num);
    } while (num != -1);
    fclose(oufile);
    return 0;
}

