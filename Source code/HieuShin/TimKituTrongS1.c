#include<stdio.h>
#include<string.h>
#define max 100
char TimKyTuTrongChuoi(char s[],char s2[])

{

    int i;
    int dem=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==s2[0])
        {
            printf("So *%c* o vi tri vi tri: %d\n",s[i],i);
            dem++;
        }
    }
    if(dem==0)
    {
        printf("Ky tu muon tim khong co trong chuoi!");
    }
}
int main()
{
    char s[max];
    char s2[max];
    printf("Nhap chuoi: ");
    gets(s);                                   
    printf("Nhap ky tu muon tim: ");
    gets(s2);
    TimKyTuTrongChuoi(s,s2);
    return 0;
}