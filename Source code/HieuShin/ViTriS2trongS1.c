#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    gets(s1);
    gets(s2);
    char *str = strstr(s1, s2);
    int vitri = strlen(s1) - strlen(str);
    printf("%d", vitri);
    return 0;
}