#include<stdio.h>
#include<math.h>
double f(long long n,long long m)
{
    long long a=1,b=1,A;
    int i;
    for(i=1;i<=n;i++)
    {
        a*=i;
    }
    for(i=1;i<=(n-m);i++)
    {
        b*=i;
    }
    A=a/b;
    return A;
}
double g(long long n,long long m)
{
    long long a=1,b=1,c=1,C;
    int i;
    for(i=1;i<=n;i++)
    {
        a*=i;
    }
    for(i=1;i<=(n-m);i++)
    {
        b*=i;
    }
    for(i=1;i<=m;i++)
    {
        c*=i;
    }
    C=a/(b*c);
    return C;
}
int main()
{
    long long n,m,x,y;
    while(~scanf("%lld %lld",&n,&m))
    {
        x=f(n,m);
        y=g(n,m);
        printf("%lld %lld\n",x,y);
    }
    return 0;
}
