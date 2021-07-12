#include <stdio.h>

int main() {
    int i, j, max = 0, max_index = 0;
    char S[100], T[100], dp[100][100] = { {0} };

    gets(S);
    gets(T);

    for (i = 1; S[i - 1] != '\0'; ++i)
        for (j = 1; T[j - 1] != '\0'; ++j)
            if (S[i - 1] == T[j - 1])
            {
                dp[i - 1][j - 1] = dp[i - 2][j - 2] + 1;
                if (dp[i - 1][j - 1] > max) {
                    max = dp[i - 1][j - 1];
                    max_index = i - 1;
                }
            }


    for (i = max_index - max + 1; i <= max_index; ++i)
        putchar(S[i]);
    return 0;
}