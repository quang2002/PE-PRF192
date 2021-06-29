#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_STRLEN 1000

int main()
{
    char s1[MAX_STRLEN], s2[MAX_STRLEN], s3[MAX_STRLEN], tmp[MAX_STRLEN];

    gets(s1);
    gets(s2);
    gets(s3);

    char *p = strstr(s1, s2);

    while (p != 0)
    {
        strcpy(tmp, p + strlen(s2));
        strcpy(p, s3);
        strcpy(p + strlen(s3), tmp);
        p = strstr(p + strlen(s3) + strlen(tmp), s2);
    }

    puts(s1);

    return 0;
}