#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
long long int dp[10000][10000];
int main()
{
    int i,j,n,m,N;
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for(i=1;i<=50;i++)
    {
        dp[i][0]=1;
        for(j=1;j<=i;j++)
        {
            dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
        }
    }
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d %d",&n,&m);
        printf("%lld\n",dp[n][m]);
    }
}
