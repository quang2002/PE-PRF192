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