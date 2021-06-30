#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAXN 1000

int main()
{
    char s[MAXN];
    gets(s);
    int count = 0, i;
    for (i = 0; s[i]; i++)
        if ('0' <= s[i] && s[i] <= '9') count++;
    printf("%d", count);
	return 0;
}
