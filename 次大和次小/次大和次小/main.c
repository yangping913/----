#include <stdio.h>
int main()
{
    int n,x,a[1000]={0},i,temp,j,k;
    scanf("%d",&x);
    while(x--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        printf("%d %d\n",a[n-2],a[1]);
    }
    return 0;
}
