#include<stdio.h>
#include<string.h>
char a[10000],b[10000],dp[10000][10000];
int max(int a,int b)
{
   if(a>b)
       return a;
    else
        return b;
}
int main()
{
    int i,j,l1,l2;
    scanf("%s %s",a+1,b+1);
    l1=strlen(a+1);
    l2=strlen(b+1);
    dp[l1][l2]=0;
    for(i=1;i<=l1;i++)
    {
        for(j=1;j<=l2;j++)
        {
            if(a[i]==b[j])
                dp[i][j]=dp[i-1][j-1]+1;
            else if(dp[i][j-1]>dp[i-1][j])
                dp[i][j]=dp[i][j-1];
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    printf("%d",dp[l1][l2]);
}
