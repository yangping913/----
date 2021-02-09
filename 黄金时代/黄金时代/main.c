#include<stdio.h>
int main()
{
    int n,i;
    long long int a[21]={0,5,8};
    scanf("%d",&n);
    for(i=3;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    printf("%lld",a[n]);
    return 0;
}
