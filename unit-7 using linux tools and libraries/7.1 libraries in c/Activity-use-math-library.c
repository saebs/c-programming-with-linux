/*
You are teaching a class on C-programming. The topic of your next lecture is libraries 
(what a coincidence!). You would like to teach about the use of the mathematics library in C.
To accomplish this, you have written a program which you intend to discuss with your students 
during the next class. 

Your program should first read from the user an integer, and next take the square root of that
integer and print it out with 8 decimal places. Next, your program should find and print out 
(on a new line) the mathematical constant e (Euler's constant) with 10 decimal places. To find e,
use the mathematical function exp() and note that e = exp(1).

Finally, in order to remind your students how to use the compiler, please print (on a new line)
the correct compiler command to link the mathematics library with your program. 
Note that in the example given below this line needs to be correctly completed. 
Your program's source code si stored in program.c, and your compilation command should produce 
an executable titled program.
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%10.lf\n", sqrt(n));
    printf("%10.lf\n", exp(1));
    printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra -lm program.c -o program)\n");
    return 0;

}