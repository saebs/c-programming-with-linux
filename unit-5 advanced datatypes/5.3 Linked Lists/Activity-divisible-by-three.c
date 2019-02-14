/*
 Write a new function divisibleByThree() which takes as input a pointer that holds the address of the start of a linked list of digits.
 Your function should then check whether the number stored in this linked list of digits is divisible by three.
 The function should return the value 1 if indeed the number is divisible by three and it should return the value 0 otherwise.
*/

#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

// Write your prototypes here
struct digit *createDigit(int dig);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *start);
void freeNumber(struct digit *start);
struct digit *readNumber(void);
int divisibleByThree(struct digit * start);
int sum(struct digit * start);

int main(void) {
    struct digit *start;
    start = readNumber();
    printf("The number ");
    printNumber(start);
    if (divisibleByThree(start))
        printf("is divisible by 3.\n");
    else
        printf("is not divisible by 3.\n");
    freeNumber(start);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit *readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

// Write your divisibleByThree() function here
int divisibleByThree(struct digit * start)
{
    int sum_of_digits = sum(start);
    // debug printf("%d", sum_of_digits);
    if (sum_of_digits % 3 == 0)
    {
        return 1;
    } else {
        return 0;
    }
}

// helper function
int sum(struct digit * start)
{
    int sum = 0;
    struct digit * ptr = start;
   while(ptr != NULL)
   {
        sum += ptr->num;
        ptr = ptr->next;
   }
   return sum;
}