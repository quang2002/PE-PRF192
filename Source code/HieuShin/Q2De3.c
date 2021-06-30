#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
double Sum(double x, double n)
{
	double risao = 0;
	int i;
	for (i = 1; i <= n; ++i)
		risao += (i % 2 != 0 ? 1 : -1) * pow(x, i);
	return risao;
}
int main()
{
	double x, n;
	scanf("%lf%lf", &x, &n);
	printf("Tong la: %lf", Sum(x, n));
	return 0;
}