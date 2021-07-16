#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char s[100], o[100], p[200];
    gets(s);
    gets(o);
    strcpy(p, s);
    puts(p);
    return 0;
}