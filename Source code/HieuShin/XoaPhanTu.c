#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define maxn 1000

int main()
{
	int n, a[maxn], i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", &a[i]);
	int j, k;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (a[i] == a[j])
			{
				for (k = j; k < n; k++)
					a[k] = a[k + 1];
				n--;
				j--;
			}
	for (i = 0; i < n; i++) printf("%d ", a[i]);
	return 0;
}
