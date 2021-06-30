#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n, m, i, j;
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
				printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}