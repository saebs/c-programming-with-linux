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

int main(void)
{
    int first = 7;
    int second = 14;
    int third = 21;
    struct digit * NewNodePtr, *start, *end, *tmp;
    start = createDigit(first);
    end = start;
    NewNodePtr = createDigit(second);
    end = append(end, NewNodePtr);
    NewNodePtr = createDigit(third);
    end = append(end, NewNodePtr);
    tmp = start->next;
    free(start); // first node
    start = tmp;
    tmp = start->next;
    free(start);
    free(tmp); // last node
    printf("No printing ability yet :-( but it compiles!\n");
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