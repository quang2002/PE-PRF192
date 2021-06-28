/*
* Your program allows users to enter a string: 's' with a maximum length of 100 characters.
* The system sorts the characters in each word in the string ‘s’.
* Finally, the system normalizes and prints out string ‘s’
* 
Input Format
* 
* The first line contains string s
* 
Constraints
* 
* s[max] with max <= 100
* 
Output Format
* 
* Print out string ‘s’
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sort(char *start, char *end)
{
    int i, tmp;
    for (; start < end; ++start)
        for (i = 1; start + i < end; ++i)
            if (*start > start[i])
            {
                tmp = *start;
                *start = start[i];
                start[i] = tmp;
            }
}

int main()
{
    // INPUT
    int i, j;
    char str[128];

    gets(str);

    // NORMALIZE
    for (i = 0; str[i]; ++i)
        if (str[i] == ' ')
        {
            for (j = i + 1; str[j] == ' '; ++j);
            strcpy(str + i + 1, str + j);
        }

    if (str[0] == ' ')
        strcpy(str, str + 1);
    if (str[i - 1] == ' ')
        str[i - 1] = '\0';

    // PROCESSING
    for (i = 0; str[i]; ++i)
        if (str[i] != ' ')
        {
            for (j = i + 1; str[j] != ' ' && str[j]; ++j)
                ;
            sort(str + i, str + j);
            i = j - 1;
        }

    // OUTPUT
    puts(str);
    return 0;
}
