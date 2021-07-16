#include <stdio.h>  
  
int main()  
{  
    int i,j,n,k;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    for( i=n;i>=1;i--)  
    {  
        for( j=1;j<=i-1;j++)  
        {  
            printf(" ");  
        }  
        for( k=1;k<=n;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
    }  
    return 0;  
}  
