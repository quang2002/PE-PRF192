/*
* Your program should allow users to enter an integer number: 'a'.
* The program should check if 'a' is a power of 3 or not.
* If it is, the program prints the exponent 'n' that makes the number 'a' the power of 3; else, the program prints: "a is not a power of 3" where entered number from user.
* 
Input Format
* 
* The first line contains ‘a’ is a positive number.
* 
Constraints
* 
* 1<= integer variables <=10^4
* 
Output Format
* 
* Display the exponent 'n' that makes the number 'a' the power of 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    // INPUT
    int n, tmp, exp = 0;
    scanf("%d", &n);

    // PROCESSING
    tmp = n;
    while (tmp % 3 == 0)
    {
        tmp /= 3;
        exp++;
    }

    // OUTPUT
    if (tmp == 1)
        printf("%d", exp);
    else
        printf("%d is not a power of 3", n);

    return 0;
}