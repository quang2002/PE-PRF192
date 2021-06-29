/*
* Your program should allow users to enter an array of 'n' characters where 'n'<20, 'n' is entered by users.
* It sorts and displays the array of characters in ascending order. Each element prints on one line
* 
Input Format
* 
* The first line contains n is size of the array.
* 
* After first line contains n characters.
* 
Constraints
* 
* n < 20, 'n' is entered by users.
* 
Output Format
* 
* Displays the array of characters in ascending order. Each element prints on one line after sorted
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // INPUT
    int n, i, j;
    char a[20];
    scanf("%d ", &n);

    for (i = 0; i < n; ++i)
        scanf("%c%*c", a + i);

    // PROCESSING
    for (i = 0; i < n - 1; ++i)
        for (j = i + 1; j < n; ++j)
            if (a[i] > a[j])
            {
                a[i] ^= a[j];
                a[j] ^= a[i];
                a[i] ^= a[j];
            }

    // OUTPUT
    for (i = 0; i < n; ++i)
        printf("%c\n", a[i]);

    return 0;
}
