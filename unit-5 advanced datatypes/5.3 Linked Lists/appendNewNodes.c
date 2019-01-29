#include <stdio.h>

struct vertex {
    int x;
    int y;
    struct vertex * next;
};

void printPoints(struct vertex * start);
struct vertex * append(struct vertex * end, struct vertex * newvtx);
int main(void)
{
    // create list statically
    struct vertex vtx1 = {-1, 1, NULL};
    struct vertex vtx2 = {-6, -9, NULL};
    struct vertex vtx3 = {21, 17, NULL};

    struct vertex * start, *end;

    start = end = &vtx1;
    end = append(end, &vtx2);
    end = append(end, &vtx3);

    printPoints(start);

    return 0;
}

void printPoints(struct vertex * start)
{
    struct vertex * ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d %d\n", ptr->x, ptr->y);
        ptr = ptr->next;
    }
}

struct vertex * append(struct vertex * end, struct vertex * newvtx)
{
    end->next = newvtx;
    return(end->next);
}