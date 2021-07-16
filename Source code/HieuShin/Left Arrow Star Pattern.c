#include <stdio.h>  
  
int main(void) 
{  
    int n,i,j,k;  
    printf("Enter the number of columns");  
    scanf("%d",&n);  
    //printing the upper part of the pattern..  
    for(i=1;i<=n;i++)  
    {  
        for(j=1;j<=n-i;j++)  
        {  
            printf(" ");  
        }  
        for(k=0;k<=n-i;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
    }  
    for(i=1;i<n;i++)  
    {  
        for(j=1;j<i+1;j++)  
        {  
            printf(" ");  
        }  
        for(k=1;k<=i+1;k++)  
        {  
            printf("*");  
        }  
    printf("\n");  
    }  
    return 0;  
}  