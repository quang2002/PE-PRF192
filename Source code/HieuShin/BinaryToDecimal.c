#include <stdio.h>
 
void main()
{
    unsigned long long num, binary_val, decimal_val = 0, base = 1, rem;
 
    printf("Enter a binary number(1s and 0s) \n");
    scanf("%llu", &num);
    binary_val = num;
    while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("The Binary number is = %llu \n", binary_val);
    printf("Its decimal equivalent is = %llu \n", decimal_val);
}