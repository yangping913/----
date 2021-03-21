#include <stdio.h>
#include <stdlib.h>
int k1,k2;
void f1(int a[],int l, int r)
{
    int i=l,j=r;
    int x=a[l];
    if(l>=r)
        return;
    else
    {
        while(i<j)
        {
            while(i<j&&a[j]>=x)
                j--;
            if(a[i]!=a[j])
            k1++;
            a[i]=a[j];
            while(i<j&&a[i]<=x)
                i++;
            if(a[i]!=a[j])
                k1++;
            a[j]=a[i];
        }
        a[i]=x;
    }
    f1(a,l,i-1);
    f1(a,i+1,r);
}

void f2(int a[],int n)
{
    int i,j;
    int t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                k2++;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}

int main()
{
    int a[100001],b[100001];
    int n,i;
    while(~scanf("%d",&n))
    {
        k1=0;
        k2=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            b[i]=a[i];
        }
        f1(a,0,n-1);
        f2(b,n);
        printf("%d %d\n",k2,k1);
    }
    return 0;
}
