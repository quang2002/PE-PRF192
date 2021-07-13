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
    for(i = 0; i < len; i = i + 2)
        s[i + 1] = toupper(s[i + 1]);
    puts(s);
    return 0;
}