#include<stdio.h>
int ans[100][100],a[100][100];
int max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        ans[n][i]=a[n][i];
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            ans[i][j]=max(ans[i+1][j],ans[i+1][j+1])+a[i][j];
        }
    }
    printf("%d\n",ans[1][1]);
}
