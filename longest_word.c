#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    char text[100];
    int i = 0;
    int longest = 0;
    for (i = 0; i < n; i++){
        scanf("%s", text);
        int t = 0;
        while (text[t] != '\0')
            t++;
        if (longest < t)
            longest = t;
    } 
    printf("%d\n", longest);
    return 0;
}
