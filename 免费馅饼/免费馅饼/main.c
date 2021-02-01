#include<stdio.h>
#include<string.h>
#include<math.h>
int max(int c,int d)
{
    return c>d?c:d;
}
int main()
{
    int dp[14][100001];
    int n,i,j,tt,w,t;
    while(scanf("%d",&n)!=EOF&&n)
    {
        
        tt=0;
        memset(dp,0,sizeof(dp));
        while(n--)
        {
            scanf("%d%d",&w,&t);
            dp[w+1][t]++;
            tt=max(tt,t);
            
        }
        for(i=tt-1;i>=0;i--)
        {
            for(j=1;j<=11;j++)
            {
                dp[j][i]=max(dp[j][i+1],max(dp[j+1][i+1],dp[j-1][i+1]))+dp[j][i];
            }
        }
        printf("%d\n",dp[6][0]);
    }
}
