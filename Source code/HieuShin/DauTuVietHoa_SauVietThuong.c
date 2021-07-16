/*
Đổi các từ ở đầu câu sang chữ hoa và những từ không phải đầu câu sang chữ thường. 
Ví dụ: nGuYen vAN a đổi thành: Nguyen Van A 
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void chuhoa(char *s)
{
    int i;
    s[0]=toupper(s[0]);
    for(i=1;i<strlen(s);i++) //chua tim dc cach nao toi uu hon
        if(s[i]==' ')
        {
            s[i+1]=toupper(s[i+1]);
            i++;
        }
        else
        {
            if(s[i]>='A' && s[i]<='Z')
                s[i]=s[i]+32;
        }
    puts(s);
}
int main()
{
    char s1[100];
    gets(s1);
    chuhoa(s1);
    return 0;
}