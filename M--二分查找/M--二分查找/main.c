#include<stdio.h>
int main()
{
    int n,i,q,m,key,t,l,r,a[300];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    for(;q;q--)
    {
        scanf("%d",&key);
        t=0;
        l=0;
        r=n-1;
        while(l<=r)
        {
            m=(l+r)/2;
            if(key<a[m])
                r=m-1;
            else if(key>a[m])
                l=m+1;
            else if(key==a[m])
            {
                printf("%d",m+1);
                t++;
                break;
            }
        }
        if(t==0)
            printf("-1");
        printf("\n");
    }
}
