#include <stdio.h>

struct point {
    double x;
    double y;
    double z;
};

void get_plot(struct point *);
void gPlot(struct point);
void scale(struct point *);

int main(void)
{
    struct point focal;
    get_plot(&focal); // passing by reference
    gPlot(focal); // passing by value
    scale(&focal); // by reference again!!
    gPlot(focal); // njalonjalo
    return 0;
}

void get_plot(struct point * location)
{
    printf("Enter coordinates, x y z: \n");
    scanf("%lf %lf %lf", &location->x, &location->y, &location->z);
}

void gPlot(struct point pnt)
{
    printf("\n\n");
    printf("\t\ty:%.3lf\n\t\t\t\t\tz:%.3lf\n\n\n\n\t\tx:%.3lf\n\n\n", pnt.y, pnt.z, pnt.x);
}

void scale(struct point * pointa)
{
    double fac;
    printf("Enter scale factor: ");
    scanf("%lf", &fac);
    printf("...scaling...\n");
    pointa->x  = pointa->x * fac;
    pointa->y  = pointa->y * fac;
    pointa->z  = pointa->z * fac;
}