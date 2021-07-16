#include <stdio.h>
#include <string.h>

int split(char *s, char *p, char **words)
{
    int count = 0, len = strlen(p);
    char *token;

    words[count++] = s;

    for (token = s; token = strstr(token, p); )
    {
        *token = 0;
        token += len;
        // while (*token == ' ') token++;
        words[count++] = token;
    }

    return count;
}

int main()
{
    char str[128], *words[100], i, count, s2[128];

    scanf("%[^\n]%*c", str);
    gets(s2);

    count = split(str, s2, words);

    for (i = 0; i < count; i++)
        puts(words[i]);

    return 0;
}