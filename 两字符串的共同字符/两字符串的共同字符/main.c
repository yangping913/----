#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
    return a>b? a:b;
}
int main()
{
    char s1[500],s2[500];
    int dp[500][500];
    int n,m,i,j;
    while(~scanf("%s %s",s1,s2))
        {
            n=strlen(s1);
            m=strlen(s2);
            for(i=0;i<n;i++)
            {
                dp[i][0]=0;
            }
            for(j=0;j<m;j++)
            {
                dp[0][j]=0;
            }
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=m;j++)
                {
                    if(s1[i]==s2[j])
                    {
                        dp[i][j]=dp[i-1][j-1]+1;
                    }
                    else
                    {
                        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    }
                }
            }
            printf("%d",dp[n][m]);
        }
    
}











