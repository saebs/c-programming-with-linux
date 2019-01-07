#include <stdio.h>

struct fplManager {
    char name[40];
    char country[40];
    int weekPoints;
    int rank;
};

void fplProfile(struct fplManager *);
void readManager(struct fplManager *);

int main(void)
{
    // struct fplManager one = {"Sabelo", 89, 3};
    struct fplManager best;
    readManager(&best);
    fplProfile(&best);

    printf("%zu\n", sizeof( struct fplManager) );
    // printf("%lu\n", sizeof(int));
}

void fplProfile(struct fplManager * mgr)
{
    printf("\n-FPL Manager Profile-\n");
    // printf("Name: %s\n", mgr -> name);
    printf("Name: %s\n", (*mgr).name); // dereferencing verbose method
    printf("Country: %s\n", mgr->country); // automatic dereferencing
    printf("Points: %d\n", mgr->weekPoints *12);
    printf("Level: %d\n", mgr->rank);
}

void readManager(struct fplManager * mgr)
{

    printf("Please enter FPL manager name: ");
    scanf("%s", mgr -> name);
    printf("Please enter FPL manager country: ");
    scanf("%s", mgr -> country);
    printf("Please enter Weekly average score: " );
    scanf("%d", &mgr -> weekPoints);
    if (mgr->weekPoints > 80)
     {
         mgr->rank = 10;
     } else {
         mgr->rank = 1;
     }

}