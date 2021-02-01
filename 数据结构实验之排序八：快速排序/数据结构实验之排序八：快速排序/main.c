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
    int n,i;
    int a[1000000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    f(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
