#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; ++j)
		{
			if (j == 1 || i == n || j == i)
				printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}
