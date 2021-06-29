/*
* Your program allows the first line to enter 'n' which is the size of the array [‘n’ is also position 0 in the array].
* And 'n' elements are entered on each subsequent line.
* The system then displays only the even numbers at the even position to screen and sorted increasing.
* There is a newline character between any two adjacent numbers.
* 
Input Format
* 
* The first line contains n is size of array
* 
* Next lines, each line contains an integer number.
* 
Constraints
* 
* n > 0
* 
* 1<= integer variables <=10^4
* 
Output Format
* 
* Print the even numbers after sorted to screen.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sort(int *arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; ++i)
        for (j = i + 1; j < n; ++j)
            if (arr[i] > arr[j])
            {
                arr[i] ^= arr[j];
                arr[j] ^= arr[i];
                arr[i] ^= arr[j];
            }
}

int main()
{
    // INPUT
    int arr[1000], idx = 0, n, i;

    scanf("%d", &n);
    if (~n & 1)
        arr[idx++] = n;

    for (i = 1; i <= n; ++i)
    {
        scanf("%d", arr + idx);
        if (~arr[idx] & 1 && ~i & 1)
            ++idx;
    }

    sort(arr, idx);


    // OUTPUT
    for (i = 0; i < idx; ++i)
        printf("%d\n", arr[i]);

    return 0;
}
