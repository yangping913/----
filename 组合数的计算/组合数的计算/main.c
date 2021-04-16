#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,m,i,j,t;
    long long int dp[50][50];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for(i=1;i<=45;i++)
    {
        dp[i][0]=1;
        for(j=1;j<=i;j++)
        {
            dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
        }
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        printf("%lld\n",dp[n][m]);
    }
}
