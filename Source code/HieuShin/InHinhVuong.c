#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
				printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	return 0;
}