/*
Nhập vào chuỗi str, chuỗi cần chèn strInsert và vị trí cần chèn vt. 
Hăy chèn chuỗi strInser vào chuỗi str tại vị trí vt.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void xoa(char *s,int vt,int n)
{
    strcpy(s+vt,s+vt+n);
    puts(s);
}
void chen(char *s,char *d,int vt)
{
    char c[255];
    strcpy(c,s+vt);
    strcpy(s+vt,d);
    strcat(s,c);
    puts(s);
}

int main()
{
    char s1[200], s2[100];
    gets(s1);
    gets(s2);
    int pos;
    scanf("%d", &pos);
    chen(s1, s2, pos);
    return 0;
}