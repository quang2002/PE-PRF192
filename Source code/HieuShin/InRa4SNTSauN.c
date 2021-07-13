#include <stdio.h>
void eratosthenes(int *arr, int n)
{
    int i, j;

    arr[0] = arr[1] = 0;
    for (i = 2; i < n; i++)
        arr[i] = 1;

    for (i = 2; i < n; i++)
        if (arr[i])
            for (j = 2; i * j < n; j++)
                arr[i * j] = 0;
}
int main()
{
    int n, arr[100], i, count;
    eratosthenes(arr, 200);
    scanf("%d", &n);
    for(i = n + 1; i <= 200; i++)
        if(arr[i] == 1) 
        {
            count++;
            printf("%d\n", i);
            if(count == 4) break;
        }
    return 0;
}