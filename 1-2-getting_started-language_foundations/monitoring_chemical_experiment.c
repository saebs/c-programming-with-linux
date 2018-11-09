#include <stdio.h>
int main(void)
{
    int min_temp, max_temp;
    scanf("%d %d", &min_temp, &max_temp);
    int reading = min_temp;
    int sig = 0;
    int okay =1;

    while (!sig && okay) {
        scanf("%d", &reading);
        sig = (reading == -999);
        okay = (reading >= min_temp && reading <= max_temp);

    if (!sig) {
        if (okay) {
            printf("Nothing to report\n");
        } else {
            printf("Alert!\n");
        }
    }  
    }

    return 0;
}
