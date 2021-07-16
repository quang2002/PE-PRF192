#include <stdio.h>
#include <string.h>

int main()
{
    int x;
    char str[128];
    scanf("%[^\n]%*c", str);
    scanf("%d", &x);

    strcpy(str + x + 1, str + x);

    str[x] = '\0';

    puts(str);
    puts(str + x + 1);


    return 0;
}