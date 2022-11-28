#include <stdio.h>
#include "misc.h"

int main()
{
    char s[100];
    int i,j,c = 0,n;

    printf("Enter the string :\n");
    gets(s);
    for(j = 0; s[j]; j++);
    n = j;
    printf("characters count in a string :\n");
    for(i = 0; i < n; i++)
    {
        c = 1;
        if(s[i]){
            for(j = i+1; j < n; j++)
            {
                if(s[i] == s[j]){
                    c++;
                    s[j] = '\0';
                }
            }
            printf(" %c :  %d \n", s[i], c);

        }
    }
    return 0;

    myFunc();
    fflush(stdout);

    return 0;
}
