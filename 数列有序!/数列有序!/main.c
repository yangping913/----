#include<stdio.h>
int main()
{
    int n,m,i,j,a[100],t;
    while(scanf("%d%d",&n,&m),n||m)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
           
        }
        a[n]=m;
        for(i=0;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                if(a[i]>a[j])
                {
                    t=a[i];a[i]=a[j];a[j]=t;
                }
            }
        }
        for(i=0;i<=n;i++)
        {
            if(i==n)
            {
                printf("%d\n",a[n]);
            }else printf("%d ",a[i]);
        }
    }
}
