#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char s[100];
    gets(s);
    strrev(s);
    puts(s);
    return 0;
}