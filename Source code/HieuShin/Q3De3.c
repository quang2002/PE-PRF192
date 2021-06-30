#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n, m = 0, sum = 0;
	scanf("%d", &n);
	while (sum < n)
	{
		++m;
		sum += m;
	}
	printf("%d", m - 1);
	return 0;
}