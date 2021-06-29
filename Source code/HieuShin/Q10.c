#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int checknto(int n)
{
	int i;
	if (n < 2) return 0;
	else
	{
		for (i = 2; i <= sqrt(n); i++)
			if (n % i == 0)
			{
				return 0;
				break;
			}
	}
	return 1;
}
int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d", &n);
	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	if (checknto(n) == 1) printf("Not Prime");
	else printf("Prime");
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system("pause");
	return(0);
}