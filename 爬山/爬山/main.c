#include<stdio.h>
int main()
{
    int max,m,n,i,j,x,y,a[100][100];
    while(~scanf("%d%d",&m,&n))
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        scanf("%d%d",&x,&y);
        max=a[0][0];
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(max<a[i][j])
                    max=a[i][j];
            }
        }printf("%d\n",max-a[x-1][y-1]);
    }
}
