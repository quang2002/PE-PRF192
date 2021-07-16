/*
Input

Enter number of rows: 5
Output

    *****
   *****
  *****
 *****
*****
*/
#include <stdio.h>
int main(){
	int i, j, rows;
	scanf("%d", &rows);
	for(i = 1; i <= rows; i++){
		for(j = 1; j <= rows-i; j++)
        {
			printf(" ");
		}
		for(j = 1; j <= rows; j++)
        {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}