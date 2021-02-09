#include<stdio.h>
int main()
{
    char a[5];
    for(int i=0;i<5;i++)
    {
        a[i]=getchar();
        a[i]=a[i]+4;
    }printf("password is ");
    for(int i=0;i<5;i++)
    {
        putchar(a[i]);
    }return 0;
}
