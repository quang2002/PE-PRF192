/*
* Your program allows users to enter an array of n integers, where is entered by the user (n<10).
* The program removes all duplicated odd numbers (keeps only the first occurrence of the numbers).
* Then, the program prints the resultant list of numbers (after removing the duplicated ones). Between any two numbers, there is a newline character.
* Below is exam how the program works
* 
Input Format
* 
* The 1st line contains an integer number.
*
* The next five lines, each line contains an integer number
* 
Constraints
* 
* 1<= integer variables <=10^4
* 
Output Format
* 
* Print the resultant list of numbers (after removing the duplicated ones).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    // INPUT
    int n, i, j, arr[10];

    scanf("%d", &n);

    for (i = 0; i < n; ++i)
        scanf("%d", arr + i);

    // PROCESSING
    for (i = 0; i < n; ++i)
        if (arr[i] & 1)
            for (j = i + 1; j < n; ++j)
                if (arr[i] == arr[j])
                {
                    memcpy(arr + j, arr + j + 1, sizeof(int) * (n - j));
                    n--;
                    j--;
                }

    // OUTPUT
    for (i = 0; i < n; ++i)
        printf("%d\n", arr[i]);

    return 0;
}