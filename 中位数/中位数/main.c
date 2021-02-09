#include<stdio.h>
int main()
{
    int n,i,a[1000]={0},t,j,c,b;
    double m;
    while(~scanf("%d",&n))
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    if(n%2==0)
    {
        c=(n/2)-1;
        b=n/2;
        m=(a[c]+a[b])/2.0;
        printf("%.1lf\n",m);
    }
    else {m=a[n/2];
        printf("%.1lf\n",m);}
    }
}
