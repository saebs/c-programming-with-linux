#include <stdio.h>
#include <stdlib.h>

struct vertex {
    int x;
    int y;
    struct vertex * next;
};

void printPoints(struct vertex * start);
struct vertex * append(struct vertex * end, struct vertex * newvtx);
struct vertex * createVertex(int , int );
void freeVertices(struct vertex * start);

int main(void)
{
    // create list dynamically


    struct vertex * start, *end, * newpt;
    int num, i;
    int x, y;

    printf("How many vertices?\n");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("x: ");
        scanf("%d", &x);
        printf("y: ");
        scanf("%d", &y);
        // create vertex
        newpt = createVertex(x, y);
        if (i == 0)
        {
            start = end = newpt;
        } else
        {
            end = append(end, newpt);
        }
    }

    printf("You entered:\n");
    printPoints(start);
    freeVertices(start);

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

struct vertex * createVertex(int x, int y)
{
    struct vertex * ptr;
    ptr = (struct vertex *) malloc(sizeof(struct vertex));
    ptr->x = x;
    ptr->y = y;
    ptr->next = NULL;
    return (ptr);
}

void freeVertices(struct vertex * start)
{
    struct vertex * ptr = start;
    while (ptr != NULL)
    {
        start = ptr;
        ptr = ptr->next;
        free(start);
    }
}