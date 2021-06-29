#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void bin(int n)
{
    int i;
    for (i = 7; i >= 0; --i)
        printf("%d", (n >> i) & 1);
}

int main()
{
    char str[2];
    scanf("%2[^\n]", str);
    bin(str[0]);
    bin(str[1]);
    return 0;
}