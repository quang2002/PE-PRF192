#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char s[100];
    int i;
    gets(s);
    int n = strlen(s);
    for(i = 0; i < n; i++)
    {
        if(isupper(s[i])) printf("%c ", s[i]);
    }
    return 0;
}