#include<stdio.h>
int main()
{
    int n;
    double i,t,sum=0,m=1.0,k=2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=k/m;
        t=k;
        k=k+m;
        m=t;
    }printf("%.6lf\n",sum);
}
