#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	char s[100];
	gets(s);
	char *str = strrev(s);
	printf("%s", str);
	return 0;
}