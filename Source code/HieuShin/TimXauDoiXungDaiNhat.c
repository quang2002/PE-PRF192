#pragma warning (disable : 4996)
#include<stdio.h>
#include<conio.h>
#include<string.h>

void tim(char a[])
{
    int len, i, k, t1 = 0, t2 = 0, luu = 0, dem = 0;
    len = strlen(a);
    for (i = 0; i < len; i++)
    {
        if (a[i] == a[i + 1])
        {
            k = i + 1;
            while (a[k - dem - 1] == a[k + dem] && k > dem) dem++;//kiểm tra độ dài của dãy đối xứng
            if (dem > luu)
            {
                luu = dem;
                t1 = k - luu; //vị trí đầu dãy đối xứng
                t2 = k + luu - 1;// cuối dãy đối xứng
            }
        }
    }
    if (t2 == 0)
    {
        printf("\nKhong co chuoi doi xung !!!");
        return;
    }
    printf("\nChuoi doi xung dai nhat:");
    for (i = t1; i <= t2; i++)
        printf("%c", a[i]);
}
void main()
{
    char a[20];
    printf("Nhap chuoi:");
    scanf("%s", a);
    tim(a);
    getch();
}