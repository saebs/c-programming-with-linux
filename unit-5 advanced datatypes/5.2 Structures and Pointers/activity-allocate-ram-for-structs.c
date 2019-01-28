/* PROBLEM STATEMENT
In this task, we will continue to work with polygons. You are provided with the following:
- A familiar structure definition for a 2-dimensional point.
- Two familiar functions and their prototypes, "printPoint()" and "printPoly()".
- A prototype for "initializePoly()", a function that you must write.
- An empty main function which you must complete.

Please do not alter the provided code (except to fill in the main function and add your initializePoly() function).

initializePoly() should receive as input a pointer to the first structure in an array of structures as well as in integer,
indicating how many points can be stored in the array. Your job is to initialize these points in the following way:
Using a for loop with i starting at 0, initialize the x-coordinate of the point at index i as -i, and the y-coordinate as i*i.

Your main function should read the number of vertices to store in the array of points from the user, then allocate the approprate amount of memory, initialize the array with the function initializePoly, and finally print the vertices of the polygon using the function printPoly().



Example
Input:
4
Output:
(0, 0)
(-1, 1)
(-2, 4)
(-3, 9)
*/
#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {

    // Fill in your main function here
    int vertices;
    struct point * polygon;
    scanf("%d", &vertices);
    polygon = (struct point *) malloc(vertices *  sizeof(struct point));
    initializePoly(polygon, vertices);
    printPoly(polygon, vertices);
    // Remember to free memory remember to free memory remember to free memory!!!!
    free(polygon);
    return 0;
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

// Write your initializePoly() function here
void initializePoly(struct point * poly, int n)
{
   for (int i = 0; i < n; i++)
   {
      poly[i].x = -i;
      poly[i].y = i * i;
   }
}