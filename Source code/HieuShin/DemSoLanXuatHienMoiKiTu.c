/*
Nhập 1 chuỗi bất kì, liệt kê xem mỗi ký tự xuất hiện mấy lần.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void demkitu(char *s)
{
	int a[100],n=0, i,j, k;
	for(i=0;i<(int)strlen(s);i++)
	{
		int d=1;
		for(j=i+1;j<(int)strlen(s);j++)
			if(s[i]==s[j])
			{	
                d++;
				for(k=j;k<(int)strlen(s);k++)
					s[k]=s[k+1];
				j--;
			}
			a[n++]=d;
	
	}
	for(i=0;i<(int)strlen(s);i++)
        printf("ki tu %c xuat hien %d lan\n", s[i], a[i]);
}

int main()
{
    char s1[100];
    gets(s1);
    demkitu(s1);
    return 0;
}