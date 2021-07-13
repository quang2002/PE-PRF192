#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main()
{
    char s[100];
    int i;
    gets(s);
    int len = strlen(s);
    for(i = 0; i < len; i++)
        if(isalpha(s[i])) printf("%c", s[i]);
    return 0;
}