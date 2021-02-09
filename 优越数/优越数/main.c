#include<stdio.h>
int main()
{
    int a,b,c,n;
    float ave;
    scanf("%d\n",&n);
    while(n>0)
    {
        n--;
        scanf("%d %d %d\n",&a,&b,&c);
        ave=(a+b+c)*1.0/3.0;
        if((a>ave&&b>ave)||(a>ave&&c>ave)||(b>ave&&c>ave))
        {
            printf("Yes\n");
        }else printf("No\n");
    }return 0;
}
