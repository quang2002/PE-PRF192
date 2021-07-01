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
    int n, i, j, k, ctr[MAXN] = { 0 };
    gets(s);
    n = strlen(s);
    for (i = 0; i < n; i++)
    {
        ctr[i] = 1;
        if (isalpha(s[i]) != 0)
        {
            for (j = 0; j < n + 1; j++)
            {
                if (i != j)
                {
                    if (s[i] == s[j])
                    {
                        ctr[i]++;
                        for (k = j; k < n; k++)
                            s[k] = s[k + 1];
                        n--;
                        j--;
                    }
                }
            }
        }
        else
        {
            for (k = i; k < n; k++)
                s[k] = s[k + 1];
            n--;
            i--;
        }
    }
    for (i = 0; i < n; i++) printf("%c_%d ", s[i], ctr[i]);
    return 0;
}