#include<stdio.h>
int main()
{
    int dx[10]={0,-2,-1,1,2,2,1,-1,-2};
    int dy[10]={0,1,2,2,1,-1,-2,-2,-1};
    int m,n,x,y,i,j;
    int f[20][20]={0};
    int g[20][20]={0};
    scanf("%d %d %d %d",&n,&m,&x,&y);
    g[x][y]=1;
    for(i=1;i<=8;i++)
    {
        if((x+dx[i]>=0)&&(x+dx[i]<=n)&&(y+dy[i]>=0)&&(y+dy[i]<=m))
        {
            g[x+dx[i]][y+dy[i]]=1;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(g[i][0]!=1)
            f[i][0]=1;
        else
        {
            for(;i<=m;i++)
            {
                f[i][0]=0;
            }
        }
    }
    for(j=1;j<=m;j++)
    {
        if(g[0][j]!=1)
            f[0][j]=1;
        else
        {
            for(;j<=m;j++)
            {
                f[0][j]=0;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(g[i][j]==1)
                f[i][j]=0;
            else
                f[i][j]=f[i-1][j]+f[i][j-1];
        }
    }
    printf("%d\n",f[n][m]);
    return 0;
}
