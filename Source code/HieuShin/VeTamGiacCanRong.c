#include<stdio.h>
#include<stdlib.h>
int main()	
{
	int n, j, i;
	scanf("%d", &n);
    int k = n - 1;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < 2 * n -  1; j++)
        {
            if(j == k - i || j == k + i) printf(" * ");
            else printf("   ");
        }
        printf("\n");
    }
    for(i = 0; i < 2 * n - 1; i++) printf(" * ");
    return 0;
}