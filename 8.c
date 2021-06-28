/*
* Your program should allow users to enter a string 's' with maximum 100 characters, then it should display the number of characters in the first three words of 's'.
* Words are separated from each other by a space character
* 
Input Format
* 
* The first line contains string ‘s’
* 
Constraints
* 
* s[max] with max <= 100
* 
Output Format
* 
* Display the number of characters in the first three words of 's'
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // INPUT
    int i, cc, wc;
    char str[128];
    scanf("%100[^\n]%*c", str);

    // PROCESSING
    for (i = cc = wc = 0; str[i] && wc < 3; ++i)
        if (str[i] != ' ')
        {
            for (; str[i] && str[i] != ' '; ++i)
                cc++;
            wc++;
        }

    // OUTPUT
    printf("%d", cc);

    return 0;
}
