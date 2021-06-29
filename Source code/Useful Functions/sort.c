// sort array of char
void sort(char *arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; ++i)
        for (j = 0; j < n; ++j)
            if (arr[i] > arr[j])
            {
                arr[i] ^= arr[j];
                arr[j] ^= arr[i];
                arr[i] ^= arr[j];
            }
}

// sort array of short
void sort(short *arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; ++i)
        for (j = 0; j < n; ++j)
            if (arr[i] > arr[j])
            {
                arr[i] ^= arr[j];
                arr[j] ^= arr[i];
                arr[i] ^= arr[j];
            }
}

// sort array of long
void sort(long *arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; ++i)
        for (j = 0; j < n; ++j)
            if (arr[i] > arr[j])
            {
                arr[i] ^= arr[j];
                arr[j] ^= arr[i];
                arr[i] ^= arr[j];
            }
}

// sort array of long long
void sort(long long *arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; ++i)
        for (j = 0; j < n; ++j)
            if (arr[i] > arr[j])
            {
                arr[i] ^= arr[j];
                arr[j] ^= arr[i];
                arr[i] ^= arr[j];
            }
}

// sort array of float
void sort(float *arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; ++i)
        for (j = 0; j < n; ++j)
            if (arr[i] > arr[j])
            {
                float temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

// sort array of double
void sort(double *arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; ++i)
        for (j = 0; j < n; ++j)
            if (arr[i] > arr[j])
            {
                double temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}