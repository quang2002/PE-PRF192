#include <stdio.h>  
  
int main()  
{  
    int i,k,j,n,m=1;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    for( i=n;i>=1;i--)  
    {  
        for( j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for( k=1;k<=m;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
        m++;  
    }  
    return 0;  
}  
