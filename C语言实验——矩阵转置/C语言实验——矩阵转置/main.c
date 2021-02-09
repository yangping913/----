#include<stdio.h>
int main()
{
    int i,j,a[100][100],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==n-1)
                printf("%d\n",a[j][i]);
            else printf("%d ",a[j][i]);
        }
    }
}
