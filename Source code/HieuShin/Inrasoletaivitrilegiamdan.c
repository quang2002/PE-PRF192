#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define MAXN 1000

int main()
{
	int n, i, a[MAXN], temp, daonguoc[MAXN], dem = 0, j;
    scanf("%d", &n);
	for (i = 1; i <= n; i++) scanf("%d", &a[i]);
	for (i = 1; i <= n; i = i + 2)
		if (a[i] % 2 != 0)
		{
			daonguoc[dem++] = a[i];
		}
	for (i = 0; i < dem; i++)
		for (j = i + 1; j < dem; j++)
		{
			if (daonguoc[i] < daonguoc[j])
			{
				temp = daonguoc[i];
				daonguoc[i] = daonguoc[j];
				daonguoc[j] = temp;
			}
		}
	for (i = 0; i < dem; i++) printf("%d\n", daonguoc[i]);
	return 0;
}