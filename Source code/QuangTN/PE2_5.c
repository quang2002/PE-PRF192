#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int evenArray(int *arr, int n)
{
    int i;
    for (i = 0; i < n; ++i)
        if (arr[i] % 2 == 1)
            return 0;
    return 1;
}

int main()
{
    int arr[1000], n, i;

    scanf("%d", &n);

    for (i = 0; i < n; ++i)
        scanf("%d", arr + i);

    printf(evenArray(arr, n) ? "Even Array" : "Not an Even Array");

    return 0;
}
