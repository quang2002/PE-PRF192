#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define BADNUMBER (-0x7FFFFFFF)

int main()
{
    int i, temp, number[2], freq[2] = {0};

    number[0] = number[1] = BADNUMBER;

    for (i = 0; i < 7; ++i)
    {
        scanf("%d", &temp);
        if (number[0] == BADNUMBER)
            number[0] = temp;
        else if (temp != number[0] && number[1] == BADNUMBER)
            number[1] = temp;

        if (temp == number[0])
            freq[0]++;
        else if (temp == number[1])
            freq[1]++;
    }

    printf("%d - %d\n", freq[0], number[0]);
    printf("%d - %d\n", freq[1], number[1]);

    return 0;
}