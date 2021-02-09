#include<stdio.h>
int i,j,h;
int max(int a,int b)
{
    return (a>b)?a:b;
}
int main()
{
    int n,res=0;
    int a[1001]={-1,0};
    int dp[1001]={0};
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        for(j=0;j<i;j++)
        {
            if(a[j]<a[i])
                dp[i]=max(dp[i],dp[j]);
            res=max(res,dp[i]+a[i]);
        }
        dp[i]+=a[i];
    }
    printf("%d\n",res);
}
