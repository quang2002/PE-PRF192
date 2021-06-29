#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	float a, b;
	scanf("%f%f", &a, &b);
	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	if (a > b) {
		printf("float a>b"); //@STUDENT: EDIT THIS LINE TO HAVE DESIRED OUTPUT
	}
	else {
		printf("float a<=b"); //@STUDENT: EDIT THIS LINE TO HAVE DESIRED OUTPUT
	}
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system("pause");
	return(0);
}