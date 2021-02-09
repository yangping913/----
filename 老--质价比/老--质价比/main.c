#include<stdio.h>
int main()
{
    int w[1000],t,n,p[1000],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&w[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(j=0;j<n-1;j++)
    {
        for(i=0;i<n-1-j;i++)
        {
            if(w[i]>w[i+1])
            {
                t=w[i];w[i]=w[i+1];w[i+1]=t;
                t=p[i];p[i]=p[i+1];p[i+1]=t;
            }
            else if(w[i]==w[i+1]&&p[i]<p[i+1])
            {
                t=w[i];w[i]=w[i+1];w[i+1]=t;
                t=p[i];p[i]=p[i+1];p[i+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
            printf("%d %d",w[i],p[i]);
        else
            printf("\n%d %d",w[i],p[i]);
    }
}
