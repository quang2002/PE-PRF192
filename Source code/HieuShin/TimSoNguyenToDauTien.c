#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define maxn 1000

int checkprime(int n)
{
    int i;
    if (n < 2) return 0;
    for (i = 2; i <= sqrt(n); ++i)
        if (n % i == 0) return 0;
    return 1;
}

int main()
{
	int n, i, j, a[maxn];
	scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        if (checkprime(a[i]) == 1)
        {
            printf("%d", a[i]);
            break;
        }
    if (i == n) printf("-1");
	return 0;
}
