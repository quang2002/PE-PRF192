#include <stdio.h>

int sum, a[100], x, count1 = 0, i;
int main()
{
    scanf("%d", &x);
    while (x != 0)
    {
        int n = x % 10;
        x = x / 10;
        a[count1++] = n;
    }
    sum = a[0] + a[count1 - 1];
    printf("%d", sum);
    return 0;
}