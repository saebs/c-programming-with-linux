#include <stdio.h>
int main(void)
{
    char word[51] ; /* unsorted word */
    int i, j ;
    int n;
    int reps = 0;
    scanf("%s", word);
    // get word length
    i = 0;
    while (word[i] != '\0')
        i++;
    n = i;
    char temp;

    // sorting in ascii alphabetic order
// its running time is O(n^2) ... slooooow
    for (j = 0; j < n; j++){
        for (i = 0; i < n-1; i++){
            if (word[i] > word[i+1]) {
                temp = word[i];
                word[i] = word[i+1];
                word[i+1] = temp;
            }
        }
    }
    // iterate through word
    // compare ltr to ltr + 1

    char previous = ' '; // rogue non alphabet start value
    for (i = 0; i < n-1; i++) {
            if (word[i] == word[i + 1] && (word[i] != previous)){
                reps++;
            }
            previous = word[i];
    }
    printf("%d\n", reps);
        return 0;
}
