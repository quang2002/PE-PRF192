#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define maxn 1000

int check(int a[], int n)
{
	int i;
	for (i = 0; i < n - 1; ++i)
	{
		if (a[i] > a[i + 1]) return 0;
	}
	return 1;
}

int main()
{
	int n, i, j, a[maxn];
	scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
	if (check(a, n) == 0) printf("-1");
	else printf("Mang tang dan");
	return 0;
}
