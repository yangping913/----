#include<stdio.h>
#include<stdlib.h>
struct hotel{
    int a,b;
    
}room[5001];
int main()
{
    int n,i,y,max1;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d%d",&room[i].a,&room[i].b);
        }
        max1=room[1].a;
        y=1;
        for(i=0;i<=n;i++)
        {
            if(max1<room[i].a)
            {
                max1=room[i].a;
                y=i;
            }
        }
        for(i=1;i<=n;i++)
        {
            if((room[i].a==room[y].a)&&(room[i].b>room[y].b))
                y=i;
        }
        printf("%d\n",y);
    }
}
