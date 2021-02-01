#include<stdio.h>
#include<string.h>
int a[20][20],ans=10000,m,n;
int min(int c,int d)
{
    return c<d?c:d;
}
void dfs(int i,int j,int sum)
{
    sum=sum+a[i][j];
    if(i<m)
        dfs(i+1,j,sum);
    if(j<n)
        dfs(i,j+1,sum);
    if(i==m&&j==n&&sum>0)
        ans=min(ans,sum);
    
}
int main()
{
    int i,j;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    dfs(1,1,0);
    if(ans==10000)
        printf("-1");
    else
        printf("%d",ans);
}
