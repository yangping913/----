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
    int n,i,k;
    int a[1000000];
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    f(a,1,n);
    printf("%d",a[k]);
}
