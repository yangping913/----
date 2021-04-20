#include<string.h>
#include<stdio.h>
int main()
{
    int i,n,t,j,a[1000010];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-2;i=i+2)
        for(j=i+2;j<n;j=j+2)
    {
       if(a[i]>a[j])
       {
           t=a[i],a[i]=a[j],a[j]=t;
       }
    }
    for(i=1;i<n-2;i=i+2)
        for(j=i+2;j<n;j=j+2)
    {
       if(a[i]<a[j])
       {
           t=a[i],a[i]=a[j],a[j]=t;
       }
    }
    for(i=0;i<n;i++)
    {
        if(i!=n-1)
            printf("%d ",a[i]);
        else
            printf("%d\n",a[i]);
    }
    return 0;
}
