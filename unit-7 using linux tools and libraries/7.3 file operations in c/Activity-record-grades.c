/*
 * You are grading final exams and you are recording grades (integers) in a file "myGrades.txt". You just got distracted by a phone call and can't remember whether or not you already recorded the grade of the student whose paper you just finished grading.
 *
 * Expecting that this may not be the last time your phone rings you decide to write a C-program to help you out. The program should first read, from the user input, the grade (an integer) that you need to check on. Next, the program should open the file "myGrades.txt", find the last number in the file, close the file, and compare the last number from the file to the grade read from the user input. If the two grades are equal then you presumably already recorded the grade and don't have to
 * do anything. If on the other hand the two grades do not equal each other then you have not yet recorded this new grade and need to do so by appending this new grade to the file.
 *
 * Finally, reopen the file and print its new contents to the screen.
 */
#include <stdio.h>

void printgrades(FILE *filegrades, char *filename);
int main(void)
{
    int usr_grade, fgrade, last_grade;
    scanf("%d", &usr_grade);
    char *filename = "myGrades.txt";
    FILE *filegrades = fopen(filename, "r");
    while (fscanf(filegrades, "%d", &fgrade) != EOF)
        last_grade = fgrade;
    fclose(filegrades);

    if (usr_grade != last_grade)
    {
        filegrades = fopen(filename, "a");
        fprintf(filegrades, " %d", usr_grade);
        fclose(filegrades);
    }
    filegrades = fopen(filename, "r");

    printgrades(filegrades, filename);

    fclose(filegrades);
    return 0;
}

void printgrades(FILE *filegrades, char *filename)
{
    filegrades = fopen(filename, "r");
    int grade;
    fflush(filegrades);
    while (fscanf(filegrades, "%d", &grade) != EOF)
        printf("% d", grade);
    printf("\n");
}



