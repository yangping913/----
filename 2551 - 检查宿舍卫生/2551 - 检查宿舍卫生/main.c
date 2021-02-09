#include<stdio.h>
#include<stdlib.h>
struct node
{
    int zf;
    int a,b,c,d,e;
}arr[105];
int main()
{
    int i,x,n,ans=0,ma=0;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d %d %d %d %d",&arr[i].a,&arr[i].b,&arr[i].c,&arr[i].d,&arr[i].e);
    }
    for(i=0;i<x;i++)
    {
        arr[i].zf=arr[i].a+arr[i].b+arr[i].c+arr[i].d+arr[i].e;
        if(arr[i].zf<85)
            ans++;
        if(arr[i].zf>ma)
            ma=arr[i].zf;
    }
    if(ma>=85)
        printf("%d %d\n",ans,ma);
    else
        printf("%d No\n",ans);
    return 0;
}
