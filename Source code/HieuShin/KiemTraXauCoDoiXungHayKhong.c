/*
Viết hàm kiểm tra xem chuỗi có đối xứng hay không?.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int ktdoixung(char *s)
{
    char c[255];
    strcpy(c,s);
    if(strcmpi(s,strrev(c))==0)
        return 1;
    else return 0;
}
int main()
{
    char s1[100];
    gets(s1);
    if(ktdoixung(s1) == 1) printf("Doi xung");
    else printf("Khong doi xung");
    return 0;
}
