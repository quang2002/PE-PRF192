#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char s[1000], p[1000], temp;
	int check, m, n, i, j, k, g;
	fgets(s, sizeof(s), stdin);
	fgets(p, sizeof(p), stdin);
	m = strlen(s) - 1;
	strrev(p);
	n = strlen(p) - 1;
	for (i = 0; i < m; i++)
	{
		check = 0;
		if (s[i] == p[n])
		{
			check = 1;
			k = n;
			for (j = i; j < i + n; j++)
			{
				if (s[j] != p[k])
				{
					check = 0;
					break;
				}
				k--;
			}
		}
		if (check == 1)
		{
			k = 1;
			for (g = i; g < i + n; g++)
			{
				s[g] = p[k];
				k++;
			}
		}
	}
	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	puts(s);
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system("pause");
	return(0);
}