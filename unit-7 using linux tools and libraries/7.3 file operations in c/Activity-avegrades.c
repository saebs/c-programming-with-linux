#include <stdio.h>
int main(int argc, char **argv)
{
    int ngrades = 0;
    int  grade ; // avoid division by zero
    int sumgrades = 0;
    double average = 0.00;
    int checkempty;
    if (argc != 2)
    {
        printf("./program textfile.txt\n");
        return 1;
    }

    char *filename = argv[1];

    FILE * gradesfile = fopen(filename, "r");
    int data;
    data = fscanf(gradesfile, "%d", &checkempty);
    if (data == EOF)
    {
        printf("No data found!\n");
        return 1;
    }

    while (fscanf(gradesfile, "%d", &grade) != EOF)
    {
        ngrades++;
        sumgrades += grade;
    }

    average = sumgrades / (double) ngrades;
    printf("%.2lf\n", average);
    fclose(gradesfile);
    return 0;
}