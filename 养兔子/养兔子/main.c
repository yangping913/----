#include<stdio.h>
int main()
{
    int n;
    long long int f[1000];
    scanf("%d",&n);
    f[1]=1;
    f[2]=2;
    for(int i=3;i<=n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    printf("%lld\n",f[n]);
    return 0;
}


