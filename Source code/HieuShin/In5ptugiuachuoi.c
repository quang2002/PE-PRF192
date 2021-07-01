#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define MAXN 1000

int main()
{
    char s[MAXN];
    gets(s);
    int n = strlen(s), i;
    for (i = n / 2 - 2; i <= n / 2 + 2; i++)
        printf("%c", s[i]);
    return 0;
}