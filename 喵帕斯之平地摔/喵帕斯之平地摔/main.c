#include<stdio.h>
int main()
{
    int n,m,a[100],i;
    while(~scanf("%d",&n))
    {
        m=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<n-1;i++)
        {
            if(a[i]>a[i-1]&&a[i]>a[i+1])
                m++;
        }
        printf("%d\n",m);
    }
}
