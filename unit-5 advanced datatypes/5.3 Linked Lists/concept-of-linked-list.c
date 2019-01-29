#include <stdio.h>

struct vertex {
    int x;
    int y;
    struct vertex * next;
};

int main(void)
{
    // create list

    struct vertex vtx1 = {-1, 1, NULL};
    struct vertex vtx2 = {-6, -9, NULL};
    struct vertex vtx3 = {21, 17, NULL};

    struct vertex * ptr, * start;

    start = &vtx1;
    vtx1.next = &vtx2;
    vtx2.next = &vtx3;

    ptr = start;
    while (ptr != NULL)
    {
        printf("%d %d\n", ptr->x, ptr->y);
        ptr = ptr->next;
    }
    return 0;

}