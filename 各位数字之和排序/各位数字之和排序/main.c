#include<stdio.h>
int main()
{
    int a[10],sum[10],i,j,n,t;
    while(~scanf("%d",&n)&&n>0)
    {
        for(i=0;i<n;i++)
        {
            sum[i]=0;
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            t=a[i];
            for(j=0;;j++)
            {
                sum[i]+=t%10;
                t=t/10;
                if(t==0)
                    break;
            }
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(sum[i]>sum[j])
                {
                    t=sum[i];sum[i]=sum[j];sum[j]=t;
                    t=a[i];a[i]=a[j];a[j]=t;
                    
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(i==n-1)
                printf("%d\n",a[i]);
            else
                printf("%d ",a[i]);
        }
    }
}
