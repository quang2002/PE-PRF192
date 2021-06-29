/*
* Users are required to enter five integer numbers using the keyboard (STDIN).
* The program needs to find the maximum even number among the entered values.
* The program then displays this number on screen.
* Below is an example of how the program will run:
* 
Input Format
* 
* Five lines, each line contains an integer number.
* 
Constraints
* 
* 1<= integer variables <=10^4
* 
Output Format
* 
* Print the maximum even number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    // INPUT
    int n = 5, tmp, max = -0x7FFFFFFF;

    while (n--)
    {
        scanf("%d", &tmp);
        if (~tmp & 1)
            max = max > tmp ? max : tmp;
    }

    // OUTPUT
    if (max != -0x7FFFFFFF)
        printf("%d", max);

    return 0;
}