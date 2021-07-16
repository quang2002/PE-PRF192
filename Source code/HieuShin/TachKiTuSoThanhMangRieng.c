/*
Viết hàm tra xem trong chuỗi có kí tự số hay không nếu có tách ra thành một mảng số riêng.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void tachso(char *s)
{
    int a[100],j=0, i, t;
    for(i=0;i<strlen(s);i++)
    if(s[i]>='0' && s[i]<='9')
    {		
        a[j]=s[i];//ki tu kieu char chuyen thanh kieu int(vd:1=>49)
        j++;
        for(t=i;t<strlen(s);t++)
            s[t]=s[t+1];
        i--;
    }
    puts(s);
    for(i=0;i<j;i++) printf("%c ", a[i]);
}

int main()
{
    char s1[100];
    gets(s1);
    tachso(s1);
    return 0;
}
