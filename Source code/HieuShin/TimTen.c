/*
Viết chương trình tìm kiếm tên trong chuỗi họ tên. Nếu có thì xuất ra là tên này đă nhập
đúng, ngược lại thông báo là đă nhập sai.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void timten(char *a,char *b)
{
    int n=strlen(a), i;
    char *s;
    for(i=n-1;i>=0;i--)
        if(a[i]==' ')
        {
            s=a+i+1;
            break;	
        }
    if(strcmpi(s,b)==0)// strcmp==stricmp
        printf("Nhap dung ten!");
    else
        printf("Nhap sai ten!");
}
int main()
{
    char s1[100], s2[100];
    gets(s1);
    gets(s2);
    timten(s1, s2);
    return 0;
}
