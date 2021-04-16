#include<stdio.h>
int n,m,max=10000;
int a[100][100];
int search(int i,int j,int sum)
{
    
    sum+=a[i][j];
    if(i<n)
        search(i+1,j,sum);
    if(j<m)
        search(i,j+1,sum);
    if(i==n&&j==m&&sum<max&&sum>0)
        max=sum;
    return max;
}
int main()
{
    int i,j,h;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    h=search(1,1,0);

    if(h==10000)
        printf("-1\n");
    else
        printf("%d\n",h);
}
