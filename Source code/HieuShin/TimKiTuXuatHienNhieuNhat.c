/*
Viết chương trình tìm kiếm xem ký tự nào xuất nhiện nhiều nhất trong chuỗi.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void kituxuathiennhieunhat(char *s)
{
	int a[100],n=0, i, j, k;
	for(i=0;i<(int)strlen(s);i++)
	{
		int d=1;
		for(j=i+1;j<(int)strlen(s);j++)
			if(s[i]==s[j])
			{	d++;
				for(k=j;k<(int)strlen(s);k++)
					s[k]=s[k+1];
				j--;
			}
		a[n++]=d;
	}
	int max=a[0];
	for(i=1;i<(int)strlen(s);i++)
		if(a[i]>max)
		    max=a[i];
	for(i=1;i<(int)strlen(s);i++)
		if(a[i]==max)
		    printf("ki tu %c xuat hien nhieu nhat voi %d lan\n", s[i], a[i]);

}

int main()
{
    char s1[100];
    gets(s1);
    kituxuathiennhieunhat(s1);
    return 0;
}