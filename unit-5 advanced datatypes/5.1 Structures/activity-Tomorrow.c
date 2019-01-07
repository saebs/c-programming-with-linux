/*
In this problem you will continue developing the data feature which you started implementing in the previous problem.
You will implement a "tomorrow" feature in the C programming language via a function called "advanceDay()".
The function advanceDay() should take as input a date (stored in a struct date) and return the date of the following day.
You do not have to take into account leap years (although you may if you wish to).
That is, it is okay for your function to always return March 1 as the day following February 28, no matter the year.

You are provided with a familiar date structure definition, a main function as well as the function prototypes for the readDate(),
printDate(), and advanceDate() functions. Do not modify any of the given code.
Simply add your function definitions underneath the main() function.
For the readDate() and printDate() functions you may simply copy and paste the code you developed in the previous task.
*/

#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date);

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

void readDate(struct date * dt)
{
    // scanf("%d %d %d", &(*dt).year, &(*dt).month, &(*dt).day);
    scanf("%d %d %d", &dt->year, &dt->month, &dt->day); // refactored line
}

void printDate(struct date dt)
{
    // mm/dd/yyyy
    printf("%d%d/%d%d/%d\n", dt.month / 10, dt.month %10, dt.day / 10, dt.day % 10, dt.year);
}

// new feature
struct date advanceDay(struct date today)
{
    // to doo
    struct date nextDay;
    nextDay.year = today.year;
    nextDay.month = today.month;
    nextDay.day = today.day + 1;

    // if last day
    if (today.day%28 == 0 || today.day%30 == 0 || today.day%31 == 0 )
    {
        nextDay.day = 1;
        nextDay.month = (today.month + 1) % 12 ;
        if (today.month == 11)
            nextDay.month = 12;
    }

    if (today.day == 31 && today.month == 12)
    {
        nextDay.year = nextDay.year + 1;
    }
    return nextDay;
}
