#include <stdio.h>
// 2 x 3 matrix
int main(void)
{
    int matrix[2][3];
    int line, col;
    for (line = 0; line < 2; line++)
    {
        for (col = 0; col < 3; col++)
        {
            scanf("%d", &matrix[line][col]);
        }
    }

    printf("\t--Matrix--\n");
    for (line = 0; line < 2; line++)
    {
        printf("|");
        for (col = 0; col < 3; col++)
        {
            printf("%d \t", matrix[line][col]);
        }
        printf("|\n");
    }
    return 0;
}