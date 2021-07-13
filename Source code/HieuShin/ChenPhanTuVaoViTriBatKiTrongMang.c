#include <stdio.h>
void insert(int *arr, int *n, int position, int value)
{
    int i;
    for (i = *n; i > position; --i)
        arr[i] = arr[i - 1];
    arr[position] = value;
    (*n)++;
}
int main()
{
    int n, a[100], i, p, value;
    scanf("%d", &n);
    for(i = 0; i < n; ++i) scanf("%d", &a[i]);
    scanf("%d%d", &p, &value);
    insert(a, &n, p - 1, value);
    for(i = 0; i < n; ++i) printf("%d\n", a[i]);
    return 0;
}