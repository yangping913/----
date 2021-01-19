#include<stdio.h>
int main()
{
    int a[20][20],i,j,n;
    while(~scanf("%d",&n)&&n)
    {
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
                if(a[i][j]!=a[j][i])
                {
                    break;
                }
            }
            if(j!=n)
            {
                break;
            }
        }
        if(i==n)
        {
            printf("yes\n");
        }else printf("no\n");
    }
}
