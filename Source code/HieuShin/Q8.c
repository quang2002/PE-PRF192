#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*int convertDecimalToOctal(int decimalNumber)
{
	int octalNumber = 0, i = 1;
	while (decimalNumber != 0)
	{
		octalNumber += (decimalNumber % 8) * i;
		decimalNumber /= 8;
		i *= 10;
	}
	return octalNumber;
}*/
int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char c;
	int x, oct;
	scanf("%c", &c);
	x = (int) c;
	//oct = convertDecimalToOctal(x);
	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%d %#o", x, x);
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system("pause");
	return(0);
}