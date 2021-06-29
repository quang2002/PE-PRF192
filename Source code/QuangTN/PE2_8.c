#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int check_prime(int n)
{
    int i, loop = sqrt(n);
    for (i = 2; i <= loop; ++i)
        if (n % i == 0)
            return 0;
    return n > 1;
}

int main()
{
    int a, b, i, primes[2], count = 0;

    scanf("%d %d", &a, &b);

    for (i = b - 1; i > a; --i)
        if (check_prime(i))
        {
            primes[count++] = i;
            if (count >= 2)
                break;
        }

    for (i = count - 1; i >= 0; --i)
        printf("%d ", primes[i]);

    return 0;
}