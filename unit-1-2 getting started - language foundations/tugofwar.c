#include <stdio.h>
int main(void)
{
    int members = 0;
    int team1 = 0;
    int team2 = 0;
    int i, a, b = 0;
    scanf("%d", &members);
    for (i = 0; i < members; i++) {
        scanf("%d", &a);
        scanf("%d", &b);
        team1 = team1 + a;
        team2 = team2 + b;
    }

    if (team1 > team2) {
        printf("Team 1 has an advantage\n");
    } else {
        printf("Team 2 has an advantage\n");
    }
    printf("Total weight for team 1: %d\n", team1);
    printf("Total weight for team 2: %d\n", team2);
    return 0;
}
