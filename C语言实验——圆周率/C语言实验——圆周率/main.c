#include<stdio.h>
int main()
{
    double i,n,sum=0;
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        sum+=(1/(4*i-3)-1/(4*i-1))*4;
        
    }printf("%0.5lf\n",sum);
    return 0;
}
