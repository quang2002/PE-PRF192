#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define MAXN 1000

int main()
{
	char s[MAXN];
	int leng, i;
	
	gets(s);

	// VietHoa
	char* str = strupr(s);

	// Viet thuong

	char* str = strlwr(s);
	
	puts(str);
	return 0;
}