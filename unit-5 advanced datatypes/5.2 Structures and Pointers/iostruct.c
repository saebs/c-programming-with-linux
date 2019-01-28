#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x;
    int y;
};
void readpoint(struct point * );
void invert(struct point );
void printpoint(struct point po);
// void printPoint(struct point pt);
void printPolygon(struct point *ptr, int );
void readTriangle(struct  point *ptr );

int main(void)
{
    struct point * polygon;
    int num;
    printf("How many vertices does your polygon have: ");
    scanf("%d", &num);
    polygon = (struct point *) malloc(num * sizeof(struct point));
    for (int i=0; i < num; i++)
    {
        readpoint(&polygon[i]);
    }
    printPolygon(polygon, num);
    free(polygon);
    return 0;
}

// void printTriangle(struct point * ptr)
// {
//     int i;
//     for (i = 0; i > 3; i++)
//     {
//         printpoint(ptr[i]);
//     }
// }

void printPolygon(struct point *ptr, int n) {
    int i;
    for (i=0; i<n; i++) {
        printpoint(ptr[i]);
    }
}

// read point
void readpoint(struct point *pt)
{
    printf("Enter 'x' 'y' coordinates: ");
    scanf("%d %d", &pt->x, &pt->y);
}


// print point

void printpoint(struct point coord)
{
    printf("(%d, %d)\n", coord.x, coord.y);
}

void printPoint(struct point pt){
    printf("(%d, %d)\n", pt.x, pt.y);
}



void invert(struct point pnt)
{
    printf("invert..\n");
    printf("(%d, %d)\n", -pnt.x, -pnt.y);
}

