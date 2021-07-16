/*
Cho chuỗi str, nhập vào vị trí vt và số kí tự cần xóa n, 
hăy xóa n kí tự tính từ vị trí vt trong chuỗi str.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void xoa(char *s,int vt,int n)
{
    strcpy(s+vt,s+vt+n);
    puts(s);
}

int main()
{
    char s1[100];
    gets(s1);
    int pos, n;
    scanf("%d%d", &pos, &n);
    xoa(s1, pos, n);
    return 0;
}