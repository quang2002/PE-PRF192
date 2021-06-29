/*
    Cắt chuỗi, đếm từ bắt đầu bắt đầu bằng h và kết thúc bằng g
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int split(char *s, char *delim, char **words)
{
    int count = 0;
    char *token;

    token = strtok(s, delim);
    while (token)
    {
        words[count++] = token;
        token = strtok(NULL, delim);
    }

    return count;
}

int main()
{
    char str[128], *words[100];

    gets(str);

    int i, count = 0, idx = split(str, " ", words);

    for (i = 0; i < idx; ++i)
    {
        if (words[i][0] == 'h' && words[i][strlen(words[i]) - 1] == 'g')
            count++;
    }

    printf("%d", count);

    return 0;
}