#include <stdio.h>
#include <string.h>

int main(void) {

    int i;

    printf("+");
    for (i = 0; i < 23; i++)
        printf("-");
    printf("+\n");

    for (i = 0; i < 3; i++) {
        printf("| o | X | o | X | o | X |");
        printf("\n");
        printf("| X | o | X | o | X | o |");
        printf("\n");

    }

    printf("+");
    for (i = 0; i < 23; i++)
        printf("-");
    printf("+");

    char str[2] ;  
    str[0] = '\n';
    char x = str[0];
    printf("\nlength %d ", strlen(str) );
    printf("\n contents %s ", x );

    return(0);
}
