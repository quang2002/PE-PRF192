#include <stdio.h>  
  
int main()  
{  
    int i,j,n,m=1;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    for( i=n;i>=1;i--)  
    {  
      for( j=1;j<=i;j++)  
      {  
         if(j==1 || j==i || i==n)  
          printf("*");  
          else  
          printf(" ");  
      }  
      printf("\n");  
    }  
    return 0;  
}  
