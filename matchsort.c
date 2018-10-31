#include <stdio.h>
int main(void)
{
    int matches, box_size;
    scanf("%d", &matches);
    scanf("%d", &box_size);
    printf("%d\n", matches / box_size); // number of full boxes
    printf("%d\n", matches % box_size); // remaining match sticks
    return 0;
}
