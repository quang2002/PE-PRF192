/*
Viết hàm cắt chuỗi họ tên thành chuỗi họ lót và chuỗi tên.
Ví dụ: chuỗi họ tên là:”Nguyễn Văn A” cắt ra 2 chuỗi là chuỗi họ lót:”NguyễnVăn”,chuỗi tên là:”A
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void cathoten(char *s)
{
    char *t;
    int i;
    for(i=strlen(s)-1;i>=0;i--)
        if(s[i]==' '&&s[i+1]!=' ')
            break;
    t=s+i+1;
    s[i]='\0';
    puts(s);
    //printf("\n");
    puts(t);

}

int main()
{
    char s1[100];
    gets(s1);
    cathoten(s1);
    return 0;
}
