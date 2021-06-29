#include <string.h>

int split(char *s, char *delim, char **words)
{
    int count = 0;
    char *token;

    token = strtok(s, delim);
    while (token)
    {
        words[count++] = token;
        token = strtok(0, delim);
    }

    return count;
}