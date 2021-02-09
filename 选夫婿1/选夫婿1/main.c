#include<stdio.h>
#include<stdlib.h>
struct st{
    char name[21];
    int h,w;
}s[101],t;
int main()
{
    int n,i,j,x,a,b,c,d;
    scanf("%d",&n);
    x=0;
    for(i=1;i<=n;i++)
    {
        scanf("%s %d %d",s[i].name,&s[i].h,&s[i].w);
    }
    scanf("%d %d %d %d",&a,&b,&c,&d);
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(s[i].h>s[j].h)
            {
                t=s[i];s[i]=s[j];s[j]=t;
            }
            if(s[i].h==s[j].h)
            {
                if(s[i].w>s[j].w)
                {
                    t=s[i];s[i]=s[j];s[j]=t;
                }
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        if(s[i].h>=a&&s[i].h<=b&&s[i].w>=c&&s[i].w<=d)
        {
            printf("%s %d %d\n",s[i].name,s[i].h,s[i].w);
            x++;
        }
    }
    if(x==0)
    {
        printf("No\n");
    }
}
