#include<stdio.h>
int main()
{
    int a[20],n,i,j,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==n-1)
            {
                printf("%d\n",a[j]);
            }
            else printf("%d ",a[j]);
        }
        t=a[n-1];
        for(j=n-1;j>0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=t;
    }
}
