#include <math.h>

int check_prime(int n)
{
    int i, loop = sqrt(n);
    for (i = 2; i <= loop; i++)
        if (n % i == 0)
            return 0;
    return n > 1;
}
