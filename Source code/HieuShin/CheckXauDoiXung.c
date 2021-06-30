#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAXN 1000

int checkchuoidoixung(char str[])
{
	char temp[MAXN];
	strcpy(temp, str);
	strrev(temp);
	if (strcmp(temp, str) == 0) return 1;
	return 0;
}

int main()
{
	char str[MAXN];
	gets(str);
	if (checkchuoidoixung(str) == 1)
		printf("La chuoi doi xung");
	else printf("Khong la chuoi doi xung");
	return 0;
}