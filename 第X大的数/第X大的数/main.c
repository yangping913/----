#include<stdio.h>
void f(int a[],int l,int r)
{
    if(l<r)
    {
        int i,j,key;
        key=a[l];i=l;j=r;
        while(i<j)
        {
            while(i<j&&a[j]>=key)
                j--;
            a[i]=a[j];
            while(i<j&&a[i]<=key)
                i++;
            a[j]=a[i];
        }
        a[i]=key;
        f(a,l,i-1);
        f(a,i+1,r);
    }
}
int main()
{
    int a[100000];
    int n,i,m,b;
    while(~scanf("%d",&n))
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        f(a,1,n);
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&b);
            printf("%d\n",a[n+1-b]);
        }
    }
}

