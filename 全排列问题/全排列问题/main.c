#include<stdio.h>
void swap(int *p,int *q)
{
    int t=*p;*p=*q;*q=t;
}
void cr(int a[],int l,int r)
{
    int t,i;
    if(l>=r)
        return ;
    t=a[r];
    for(i=r;i>l;i--)
    {
        a[i]=a[i-1];
    }
    a[l]=t;
}
void cl(int a[],int l,int r)
{
    int t,i;
    if(l>=r)
    {
        return ;
    }
    t=a[l];
    for(i=l;i<r;i++)
    {
        a[i]=a[i+1];
    }
    a[r]=t;
}
void perm(int a[],int k,int m)
{
    int i;
    if(k==m)
    {
        for(i=0;i<=m;i++)
        {
            if(i==m)
                printf("%d",a[i]);
            else printf("%d,",a[i]);
        }
        printf("\n");
    }
    else
    {
        for(i=k;i<=m;i++)
        {
            swap(&a[k],&a[i]);
            cr(a,k+1,i);
            perm(a,k+1,m);
            cl(a,k+1,i);
            swap(&a[k],&a[i]);
        }
    }
}
int main()
{
    int i,n,a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    perm(a,0,n-1);
    return 0;
}
