#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i, a[7], count = 0;
	int n = 7, j;
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				for (i = j + 1; i < n; i++)
					a[i - 1] = a[i];
				n--;
				i--;
			}
		}
	}
	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for (i = 0; i < n; i++)
		if (10 <= a[i] && a[i] <= 99)
		{
			printf("%d ", a[i]);
			count++;
		}
	if (count == 0) printf("No two-digit number!");
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system("pause");
	return(0);
}