#include<stdio.h>
int main()
{
    int N,x1,x2,y2,y1,n,i,a,b;
    
    while(~scanf("%d",&N))
    {
        n=0;
        scanf("%d %d\n",&x1,&y1);
        scanf("%d %d\n",&x2,&y2);
        for(i=1;i<=N;i++)
        {
            scanf("%d %d",&a,&b);
            if(a>x1&&a<x2&&b>y1&&b<y2)
            {
                n++;
            }
        }printf("%d\n",n);
    }
}
