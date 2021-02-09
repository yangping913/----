#include<stdio.h>
#include<string.h>
int f(int a,int b)
{
    return a>b?a:b;
}
char x[501],y[501];
int dp[501][501];
int main()
{
    int lenx,leny,j,i;
    while(~scanf("%s %s",x+1,y+1))
    {
        lenx=strlen(x+1);
        leny=strlen(y+1);
        for(i=1;i<=lenx;i++)
        {
            dp[i][0]=0;
        }
        for(i=1;i<=lenx;i++)
        {
            dp[0][i]=0;
        }
        for(i=1;i<=lenx;i++)
        {
            for(j=1;j<=leny;j++)
            {
                if(x[i]==y[j])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                    dp[i][j]=f(dp[i-1][j],dp[i][j-1]);
            }
        }
        printf("%d\n",dp[lenx][leny]);
    }
}
