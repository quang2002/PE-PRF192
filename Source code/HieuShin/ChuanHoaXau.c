#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAXN 1000

void normalize(char* str)
{
    int len;
    char* token;

    token = strtok(str, " ");
    while (token)
    {
        len = strlen(token);
        strcpy(str, token);
        str[len] = ' ';
        str += len + 1;
        token = strtok(0, " ");
    }

    if (len)
        *str = '\0';
}

int main()
{
    char s[MAXN];
    gets(s);
    normalize(s);
    puts(s);
	return 0;
}
