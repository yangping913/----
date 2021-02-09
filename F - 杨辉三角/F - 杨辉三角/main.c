#include<stdio.h>
int main()
{
    int n,a[50][50],i,j;
    while(~scanf("%d",&n)&&n!=0)
    {
        a[0][0]=1;
        for(i=1;i<n;i++)
        {
            a[i][0]=1;
            for(j=1;j<=i;j++)
            {
                a[i][j]=a[i-1][j]+a[i-1][j-1];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                printf("%d ",a[i][j]);
                
            }
            printf("%d\n",a[i][i]);
        }
        printf("\n");
    }
}
