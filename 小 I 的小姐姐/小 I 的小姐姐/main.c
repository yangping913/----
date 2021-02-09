#include<stdio.h>
#include<stdlib.h>
struct
{
    int w1,w2,w3;
}a[1000];
int main()
{
    int n,i,b[1000],max,t;
    while(~scanf("%d",&n))
    {
        for(i=0;i<n;i++)
        {
            scanf("%d%d%d",&a[i].w1,&a[i].w2,&a[i].w3);
            b[i]=(a[i].w1)*7/10+(a[i].w2)*2/10+(a[i].w3)/10;
        }
        max=b[0];t=0;
        for(i=1;i<n;i++)
        {
            if(max<b[i])
            {
                max=b[i];
                t=i;
            }
        }
        printf("%d\n",t);
    }
    return 0;
}
