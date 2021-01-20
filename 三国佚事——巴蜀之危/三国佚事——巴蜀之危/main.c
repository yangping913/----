#include<stdio.h>
int i,j,m,n;
long long int a[1000000];
int main()
{
    scanf("%d",&n);
    a[1]=0;
    a[2]=1;
    for(i=3;i<=n;i++)
    {
        a[i]=(i-1)*(a[i-1]+a[i-2]);
    }
    printf("%lld\n",a[n]);
    return 0;
}
