/*
    Nhập n kí tự, in ra 2 kí tự có số lần xuất hiện ít nhất
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // INPUT
    int n, i, j, dp[20] = {0};
    char arr[20];

    scanf("%d ", &n);

    for (i = 0; i < n; ++i)
        scanf("%c%*c", arr + i);

    if (n == 1) // EXCEPTION
    {
        printf("%c", arr[0]);
        return 0;
    }

    // PROCESSING
    for (i = 0; i < n; ++i)
    {
        for (j = i - 1; j >= 0; --j)
            if (arr[i] == arr[j])
            {
                dp[i] = dp[j];
                dp[j]++;
            }
        dp[i]++;
    }

    for (i = 0; i < 2; ++i)
        for (j = i + 1; j < n; ++j)
            if (dp[i] > dp[j])
            {
                dp[i] ^= dp[j];
                dp[j] ^= dp[i];
                dp[i] ^= dp[j];

                arr[i] ^= arr[j];
                arr[j] ^= arr[i];
                arr[i] ^= arr[j];
            }

    // OUTPUT
    printf((n == 2 && arr[0] == arr[1]) ? "%c\n" : "%c\n%c\n", arr[0], arr[1]);

    return 0;
}