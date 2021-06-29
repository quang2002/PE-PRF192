/*
* Your program should allow users to enter an integer 'n'.
* The program prints binary number representation of 'n' if it is a prime number;
* else the program prints: "n is not a prime number"
* where 'n' is the number entered by the user.
* 
Input Format
* 
* The first line contains ‘n’ is a positive number.
* 
Constraints
* 
* 1<= integer variables <=10^4
* 
Output Format
* 
* Display binary number representation of 'n' if it is a prime number
* 
* else the program prints: "n is not a prime number"
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int check_prime(int n)
{
    int i, loop = sqrt(n);
    for (i = 2; i <= loop; ++i)
        if (n % i == 0)
            return 0;
    return n > 1;
}

void bin(int n)
{
    int buffer[64], idx = 0;
    while (n)
    {
        buffer[idx++] = n % 2;
        n /= 2;
    }
    while (idx--)
        printf("%d", buffer[idx]);
}

int main()
{
    // INPUT
    int n;
    scanf("%d", &n);

    // OUTPUT
    if (check_prime(n))
        bin(n);
    else
        printf("%d is not a prime number", n);
    return 0;
}
