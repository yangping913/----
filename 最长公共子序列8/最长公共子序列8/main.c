#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
char a[101][101];
int b[101];
int dp[30001],n;
int qs(int *x)
{
    int i,j,index,max;
    for(i=1;i<=n;i++)
    {
        if(x[i]==0)
            return 0;
    }
    for(index=x[n]-1,i=n-1;i>=1;i--)
    {
        index=index*b[i]+x[i]-1;
    }
    if(dp[index]>=0)
        return dp[index];
    for(i=2;i<=n;i++)
    {
        if(a[1][x[1]-1]!=a[i][x[i]-1])
            break;
    }
    if(i>n)
    {
        for(j=1;j<=n;j++)
        {
            x[j]--;
        }
        max=qs(x)+1;
        for(j=1;j<=n;j++)
        {
            x[j]++;
        }
    }
    else{
        max=0;
        for(j=1;j<=n;j++)
        {
            x[j]--;
            int t=qs(x);
            if(max<t)
                max=t;
            x[j]++;
        }
    }
    dp[index]=max;
    return max;
}
int main()
{
    int t,i,j,x[101];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            scanf("%s",a[j]);
            x[j]=b[j]=strlen(a[j]);
        }
        memset(dp,-1,sizeof(dp));
        printf("%d\n",qs(x));
    }
}


