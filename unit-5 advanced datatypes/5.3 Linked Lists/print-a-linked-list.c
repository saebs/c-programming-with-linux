#include <stdio.h>
#include <stdlib.h>

struct digit
{
    int dt;
    struct digit * next;
};


struct digit * createDigit(int);

// To Do,
// create append function, takes end and  new struct, updates and return last or end node
struct digit * append(struct digit * end, struct digit * newDigitr);
void printDigits(struct digit * digits);
void freeNumber(struct digit * start);
struct digit * readNumber();

int main(void)
{
    int first = 7;
    int second = 14;
    int third = 21;

    struct digit * NewNodePtr, *start, *end, *tmp;
    // REad digits
    start = readNumber();
    printDigits(start);
    freeNumber(start); // first node
    return 0;
}

struct digit * createDigit(int dg)
{
   struct digit * poi;
   poi = (struct digit *) malloc(sizeof(dg));
   poi->dt = dg;
   poi->next = NULL;
   return poi;
}

// Append
struct digit * append(struct digit * end, struct digit * newDigitr)
{
    end->next = newDigitr;
    end = newDigitr;
    return end;
}

void printDigits(struct digit * digits)
{
    struct digit * ptr = digits;
    while (ptr != NULL)
    {
        printf("%d ", ptr->dt);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit * start)
{
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr != NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }

}
/// REad number
struct digit * readNumber()
{
    char c;
    int d;
    struct digit *start, *end , *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n')
    {
        d = c - 48;
        newptr = createDigit(d);
        if (start == NULL)
        {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }

    return start;
}