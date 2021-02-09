#include<stdio.h>
int main()
{
    int n;
    long long a[40]={1};
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        a[i]=2*a[i-1]+2;
    }
    printf("%lld",a[n-1]);
    return 0;
}
