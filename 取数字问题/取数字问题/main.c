#include<stdio.h>
int a[100][100];
int max=100000,m,n;
void search(int i,int j,int sum)
{
    sum+=a[i][j];
    if(i<n)
        search(i+1,j,sum);
    if(j<m)
        search(i,j+1,sum);
    if(i==n&&j==m&&sum<max&&sum>0)
        max=sum;
}
int main()
{
    int j,i;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    search(1,1,0);
    printf("%d\n",max);
}
