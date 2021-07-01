#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define MAXN 1000

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
	int n, i, sum = 0, snt[MAXN], k;
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
        sum += i;
    int dem = 0;
    int j = 2;
    while (dem < sum) 
    {
        if (checkprime(j)) 
        {
            snt[dem++] = j;
        }
        j++;
    }
    int pos = 0;
    for (i = 1; i <= n; i++)
    {
        for (k = 0; k < i; ++k)
        {
            printf("%d ", snt[pos]);
            pos++;
        }
        printf("\n");
    }
	return 0;
}