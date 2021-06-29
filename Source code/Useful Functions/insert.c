// insert char
void insert(char *arr, int *n, int position, char value)
{
    int i;
    for (i = *n; i > position; --i)
        arr[i] = arr[i - 1];
    arr[position] = value;
    (*n)++;
}

// insert short
void insert(short *arr, int *n, int position, short value)
{
    int i;
    for (i = *n; i > position; --i)
        arr[i] = arr[i - 1];
    arr[position] = value;
    (*n)++;
}

// insert long
void insert(long *arr, int *n, int position, long value)
{
    int i;
    for (i = *n; i > position; --i)
        arr[i] = arr[i - 1];
    arr[position] = value;
    (*n)++;
}

// insert long long
void insert(long long *arr, int *n, int position, long long value)
{
    int i;
    for (i = *n; i > position; --i)
        arr[i] = arr[i - 1];
    arr[position] = value;
    (*n)++;
}

// insert float
void insert(float *arr, int *n, int position, float value)
{
    int i;
    for (i = *n; i > position; --i)
        arr[i] = arr[i - 1];
    arr[position] = value;
    (*n)++;
}

// insert double
void insert(double *arr, int *n, int position, double value)
{
    int i;
    for (i = *n; i > position; --i)
        arr[i] = arr[i - 1];
    arr[position] = value;
    (*n)++;
}