#include <stdio.h>
#include <stdlib.h>

struct digit
{
    int dt;
    struct digit * next;
};

struct digit * createDigit(int);

int main(void)
{
    int idt = 7;
    struct digit * node;
    node = createDigit(idt);
    printf("Digit %d created with next %p\n", node->dt, node->next);
    free(node);
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