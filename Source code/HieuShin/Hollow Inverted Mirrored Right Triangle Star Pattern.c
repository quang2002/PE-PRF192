#include <stdio.h>  
  
int main()  
{  
    int n,m, i,j,k;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    m=n;  
   for(i=1;i<=n;i++)  
   {  
       for(j=1;j<i;j++)  
       {  
           printf(" ");  
       }  
       for(k=1;k<=m;k++)  
       {  
          if(i==1 || k==1 || k==m)  
           printf("*");  
           else  
           printf(" ");  
       }  
       m--;  
     
      printf("\n");  
    }  
    return 0;  
}  