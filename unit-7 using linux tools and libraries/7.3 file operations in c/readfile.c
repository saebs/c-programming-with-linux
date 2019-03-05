#include <stdio.h>

int g(int x, int y) {
      x = x + y;
      int z = 2 * x - y;
      return z;
}

int main()
{
    int i, N, number;
    double dnumber;
    FILE *rawfile;
    rawfile = fopen("raw.txt", "r");
    fscanf(rawfile, "%d", &N);
    for (i = 0; i < N; i++)
    {
        if (i < 5)
        {
            fscanf(rawfile, "%d", &number);
            printf("read integer %d\n", number);
        }
        else
        {
            fscanf(rawfile, "%lf", &dnumber);
            printf("read decimal %lf\n", dnumber);

        }
    }

    // printf("g %d\n", g(3, -10));
    return 0;
}