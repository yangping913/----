#include<stdio.h>
int a[2000][2000],s[2000][2000],a1[2000][2000],n,m,k,flag=0,x1,y2;
int next[4][2]={{0,-1},{-1,0},{0,1},{1,0}};
void dfs(int i,int j,int k)
{
    a1[k][0]=i;
    a1[k][1]=j;
    if(i==x1&&j==y2)
    {
        flag=1;
        for(int g=0;g<=k;g++)
        {
            if(g==0)
                printf("(%d,%d)",a1[g][0],a1[g][1]);
            else
                printf("->(%d,%d)",a1[g][0],a1[g][1]);
        }
        printf("\n");
    }
    for(int h=0;h<4;h++)
    {
        int nx=next[h][0]+i;
        int ny=next[h][1]+j;
        if(nx>0&&ny>0&&nx<=n&&ny<=m&&s[nx][ny]==1&&a[nx][ny]==0)
        {
            a[nx][ny]=1;
            dfs(nx,ny,k+1);
            a[nx][ny]=0;
        }
    }
}
int main()
{
    int x,y;
    while(~scanf("%d %d",&n,&m))
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                scanf("%d",&s[i][j]);
            }
        }
        scanf("%d%d",&x,&y);
        scanf("%d%d",&x1,&y2);
        a[x][y]=1;
        dfs(x,y,0);
        if(flag==0)
        {
            printf("-1\n");
        }
    }
}

