#include <stdio.h>  
int main(void) 
{  
    int n,i,j,k;  
    printf("Enter the number of rows\n");  
    scanf("%d",&n);  
    int spaces=n-1;  
    int stars=1;  
    for(i=1;i<=n;i++)  
    {  
        for(j=1;j<=spaces;j++)  
        {  
            printf(" ");  
        }  
        for(k=1;k<=stars;k++)  
        {  
            printf("*");  
        }  
        if(spaces>i)  
        {  
            spaces=spaces-1;  
            stars=stars+2;  
        }  
        if(spaces<i)  
        {  
            spaces=spaces+1;  
            stars=stars-2;  
        }  
    printf("\n");  
    }  
    return 0;
  } 