#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s1[128], s2[128], *p;
    scanf("%[^\n]%*c", s1);
    scanf("%[^\n]%*c", s2);

    int freq1[54] = {0}, freq2[54] = {0}, i;

    for (p = s1; *p; ++p) if (isalpha(*p)) freq1[islower(*p) ? *p - 'a' : *p - 'A' + 26]++;
    for (p = s2; *p; ++p) if (isalpha(*p)) freq2[islower(*p) ? *p - 'a' : *p - 'A' + 26]++;

    for (i = 0; i < 54; i++)
        if (freq1[i] > 0 && freq2[i] > 0)
            printf("%c - %d\n", i < 26 ? 'a' + i : 'A' + i - 26, freq1[i] < freq2[i] ? freq1[i] : freq2[i]);

    return 0;
}