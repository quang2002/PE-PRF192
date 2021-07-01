#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define MAXN 1000

int main()
{
    int n, i, a[MAXN], check;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) scanf("%d", a + i);
    for (i = 0; i <= n / 2; ++i)
    {
        if (a[i] != a[n - i - 1])
        {
            check = 0;
            break;
        }
        else check = 1;
    }
    if (check == 1) printf("1");
    else printf("0");
    return 0;
}