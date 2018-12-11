#include <stdio.h>
double meters_to_feet(double); 
double grams_to_pounds(double);
double celcius_to_farenheight(double);
int main(void)
{
    int n_measurements;
    scanf("%d", &n_measurements);
    double value;
    char unit;
    int i;

    for (i = 0; i < n_measurements; i++) {
        scanf("%lf %c", &value, &unit);
        if (unit == 'm')
            printf("%lf ft\n", meters_to_feet(value));
        if (unit == 'g')
            printf("%lf lbs\n", grams_to_pounds(value));
        if (unit == 'c') 
            printf("%lf f\n", celcius_to_farenheight(value));
    } 
    return 0;
}

double meters_to_feet(double meters) {
    return meters * .3048;
}

double grams_to_pounds(double grams) {
    return grams * 0.002205;
}

double celcius_to_farenheight(double celcius) {
    return (double) 32 + 1.8 * celcius; 
}
