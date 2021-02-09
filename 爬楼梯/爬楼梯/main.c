#include<stdio.h>
int main()
{
    int i,n;long long int f[55];
    scanf("%d",&n);
    f[1]=1;f[2]=2;f[3]=3;
    for(i=4;i<=n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    printf("%lld",f[n]);
    return 0;
}
