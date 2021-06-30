/*
Giả sử độ dài chuỗi chia hết cho 3. Thêm ‘-‘ sau mỗi 3 kí tự
 Vd: 123abcprf  -> 123-abc-prf
*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAXN 1000

int main()
{
	char str[MAXN];
	int i, leng, count = 0, j;
	gets(str);
	leng = strlen(str);
	for (i = 0; i < leng; i++, count++)
	{
		if (count == 3)
		{
			for (j = leng + 1; j > i; j--)
			{
				str[j] = str[j - 1];
			}
			str[i] = '-';
			leng++;
			count = -1;
		}
	}
	puts(str);
	return 0;
}
