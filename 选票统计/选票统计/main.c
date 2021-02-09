#include<stdio.h>
#include<stdlib.h>
struct f{
    int a;
}arr[1000],t;
int main()
{
    int i,n,m,x;
    scanf("%d %d",&m,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        arr[x].a++;
    }
    int max=0,t=0;
    for(i=0;i<=m;i++)
    {
        if(max<arr[i].a)
        {
            max=arr[i].a;
            t=i;
        }
    }
    printf("%d\n%d\n",t,max);
}

