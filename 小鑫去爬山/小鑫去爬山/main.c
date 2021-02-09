#include<stdio.h>
int a[101][101],b[101][101];
int n;
int main()
{
    int i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=1;j<=n;j++)
    {
        b[n][j]=a[n][j];
    }
    for(i=n;i>1;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(b[i][j]<b[i][j+1])
                b[i-1][j]=b[i][j]+a[i-1][j];
            else
                b[i-1][j]=b[i][j+1]+a[i-1][j];
        }
    }
    printf("%d",b[1][1]);
}
