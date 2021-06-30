#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	char s[100], s1[100];
	gets(s);
	gets(s1);

	int lens, i, lens1, count = 0;
	lens = strlen(s);
	lens1 = strlen(s1);

	char *str = strstr(s, s1);
	while (str != 0)
	{
		count++;
		str = strstr(str + 1, s1);
	}
	printf("%d", count);
	return 0;
}