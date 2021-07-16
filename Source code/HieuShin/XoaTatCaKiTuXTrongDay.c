/*
Nhập một chuỗi bất kì, yêu cầu nhập 1 kí tự muốn xóa. Thực hiện xóa tất cả những kí tự đó trong chuỗi.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void xoakitu(char *a,char b)
{
    int i, j;
    int n=strlen(a);
    for(i=0;i<n;i++)
        if(a[i]==b)
        {
        for(j=i;j<n;j++)
            a[j]=a[j+1];
        i--;
        n--;
        }
    puts(a);
}

int main()
{
    char s1[100],x;
    gets(s1);
    scanf("%c", &x);
    xoakitu(s1, x);
    return 0;
}
