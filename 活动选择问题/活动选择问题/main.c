#include<stdio.h>
struct{
    int b,e,s;
}a[101],t;
int main()
{
    int n,i,j,k=0,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i].b,&a[i].e);
        a[i].s=0;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j].e>a[j+1].e)
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i].b>=k)
        {
            f++;k=a[i].e;
        }
        
    }printf("%d",f);
}
