#include<stdio.h>
int main()
{
    int i,n,a,t;
    while(~scanf("%d",&n))
    {
        int c[1001]={0},max=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            c[a]++;
        }
        for(i=0;i<=1000;i++)
        {
            if(c[i]>max)
            {
                t=i;max=c[t];
            }
           
            
        }printf("%d\n",t);
    }
}
