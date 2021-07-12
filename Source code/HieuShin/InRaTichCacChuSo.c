#include <stdio.h>

int a[100], x, count1 = 0, i;
unsigned long long product = 1;
int main()
{
    scanf("%d", &x);
    while (x != 0)
    {
        int n = x % 10;
        product *= n;
        x = x / 10;
    }
    printf("%llu", product);
    return 0;
}