/*
You are still teaching a class on C-programming! You would like to find out whether the students in your class did better on the
most recent assignment than the students in your colleagues' classes. The average grades of all these classes are stored in a file
called "gradeComparison.txt". The first number stored in the file represents the average grade of the students in your class.
All of the subsequent numbers represent the average grades of students from other sections. For example, if the file contained the
following:

95.23 94.80 91.56
this would mean that the students in your class received an average grade of 95.23 on the last assignment,
which is higher than the average grades received by students in the other sections.

If, on the other hand, the file was

95.23 94.80 91.56 96.40 93.25
then this would mean that the students in the fourth class received a slightly higher grade than the students in your class.

Your job is to find out whether the students in your class did better than the students in the other classes and if so,
print out the word "Yes". If on the other hand students in another class did better than your students then you should print out
"No", followed by one space, followed by the number of the first class in the file that had a better grade average.

*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("./program textfile.txt\n");
        return 1;
    }
    int n = 0;
    double grade, mygrade;
    int found = 0;
    char *filename = argv[1];
    double checkempty;
    FILE *sections = fopen(filename, "r");

    int data;
    data = fscanf(sections, "%lf", &checkempty);
    if (data == EOF)
    {
        printf("No data found!\n");
        return 1;
    }

    while (fscanf(sections, "%lf", &grade) != EOF)
    {
        if (n == 0)
            mygrade = grade;
        n++;
        if (mygrade < grade)
        {
            found = 1;
            n++;
            break;
        }
    }

    if (found)
        printf("No %d\n", n);
    else
        printf("Yes\n");
    fclose(sections);
    return 0;
}
