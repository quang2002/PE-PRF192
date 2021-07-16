/*
Cho  một xâu, nhập vào một từ ,viết chương trình, xoá từ đó trong xâu đã cho.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void xoatu(char *s,char *c)
{
	int count = 0;
	while(strstr(s,c)!=NULL)
	{
		int t = strlen(s) - strlen(strstr(s,c)), d = strlen(c);
		if((s[t-1] == ' '&& s[t+d] == ' ')||(s[t-1] == ' '&& t + d == strlen(s)))
		{
			strcpy(s+t-1,s+t+d);// s+t-1 la khoang trang
		}
		if(s[t+d]==' '&& t==0)//truong hop xoa tu dau tien
		{
			strcpy(s,s+t+d+1);
		}
	}
	printf("%d", count);
}
int main()
{
    char s1[100], s2[100];
    gets(s1);
    gets(s2);
    xoatu(s1, s2);
    return 0;
}