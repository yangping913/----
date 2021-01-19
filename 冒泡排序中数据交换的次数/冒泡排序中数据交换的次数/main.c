#include <stdio.h>
int main()
{
    int n,x,a[1000]={0},i,t,j,c;
    scanf("%d",&x);
    while(x--)
    {
        c=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                    c++;
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
