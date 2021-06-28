/*
* Your program allows users to enter height ‘h' of a pyramid (h < 20).
* The program prints out Print half of the empty pyramid with the character '*'
* Below is an example of how the program will run:
* 
Input Format
* 
* The first line contains an integer
* 
Constraints
* 
* 1<= integer variables <=10^4
* 
Output Format
* 
* Print half of the empty pyramid with the character '*'
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // INPUT
    int n, i, j;
    scanf("%d", &n);

    // OUTPUT
    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= n; ++j)
            printf(i == n || j == n || i + j == n + 1 ? "*" : " ");
        printf("\n");
    }

    return 0;
}
