#include <stdio.h>
int main()
{
    int n, a[100], i, p, value;
    scanf("%d", &n);
    for(i = 0; i < n; ++i) scanf("%d", &a[i]);
    scanf("%d%d", &p, &value);
    p--;
    for (i = n; i > p; --i)
        a[i] = a[i - 1];
    a[p] = value;
    n++;
    for(i = 0; i < n; ++i) printf("%d\n", a[i]);
    return 0;
}