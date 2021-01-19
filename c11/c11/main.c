#include<stdio.h>
int main()
{
    int a,b,c,d,f;
    scanf("%d",&a);
    b=a/100;c=a%100/10;d=a%10;
    f = d*100+c*10+b;
    printf("%d\n",f);
    return 0;
}
