#include <stdio.h>

void set0(short **);

int main(void)
{
        short a[3] = {26, 45, 255};
        short b[2] = {23, 78};
        short c[4] = {127, 90, 30, 771};

        short * arrays[3] = {a, b, c};

        for (int i =0; i < 3; i++)
        {
            printf("%p ", arrays[i]);
            printf("%p ",  (arrays[i] + 1));
            printf("%p ",  (arrays[i] + 2));
            printf("%p ",  (arrays[i] + 3));
            printf("%d ", * arrays[i]);
            printf("%d ", * (arrays[i] + 1));
            printf("%d ", * (arrays[i] + 2));
            printf("%d\n", * (arrays[i] + 3));
        }
            printf("%d\n", arrays[0][0]);

        set0(arrays);
        // for (int i= 0; i < 3; i++)
        {
            printf("%d %d %d", *arrays[0], *(arrays[0] + 1), *(arrays[0] + 2) );
        }
        printf("\n");
        return 0;
}

void set0(short ** el) {
    *((*el)) = 0;
    *((*el) + 1) = 0;
    *((*el) + 2) = 0;
}