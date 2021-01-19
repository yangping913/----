#include<stdio.h>
int main()
{
    int n,m,sum=0,a;
    scanf("%d",&n);
    m=n*n*n;
    while(m>0)
    {
        a=m%10;
        sum=sum+a*a*a;
        m=m/10;
    }printf("%d",sum);
    return 0;
}
