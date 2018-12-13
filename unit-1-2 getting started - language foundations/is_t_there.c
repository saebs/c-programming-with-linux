#include <stdio.h>
int main(void)
{
    char word[51];
    int lw = 0; // lenght of word
    scanf("%s", word);
    // find  length of word
    while (word[lw] != '\0') 
        lw++;
    // find middle
    int mid_pt = lw/2 + lw%2; // including centre letter

    int i;
    // parse whole string and check for T or t in first half and second;
    int found = -1; // not found yet
    for (i = 0; i < lw; i++)
    {
        if (word[i] == 't' || word[i] == 'T'){
            found = 1; 
        }  
        if (i > mid_pt && (word[i] == 't' || word[i] == 'T')) {
            found = 2;
        }
    }
    printf("%d\n", found);
    return 0;
}
