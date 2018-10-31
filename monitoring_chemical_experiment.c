#include <stdio.h>
int main(void)
{
    int min_temp, max_temp;
    scanf("%d %d", &min_temp, &max_temp);
    int min_reading, max_reading;
    min_reading = min_temp;
    max_reading = max_temp; 

    while ((min_reading >= min_temp && max_reading <= max_temp) || (min_reading != -999 || max_reading != -999)) {
        printf("Nothing to report\n");
        scanf("%d %d", &min_reading, &max_reading);
    }
    if (min_reading != -999 || max_reading != -999) {
        printf("Alert!\n");
    }  

    return 0;
}
