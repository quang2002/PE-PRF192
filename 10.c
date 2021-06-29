/*
Your program allows users to enter the 'h' of a pyramid (h < 20).
The program prints out half of inverted pyramid filled with
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // INPUT
    int n, i, j;
    scanf("%d", &n);

    // OUTPUT
    for (i = n; i > 0; --i)
    {
        for (j = 0; j < i; ++j)
            printf("*");
        printf("\n");
    }

    return 0;
}