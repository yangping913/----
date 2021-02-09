#include<stdio.h>
int main()
{
    int n,m,i,max,min,ave,t;
    scanf("%d\n",&n);
    scanf("%d",&m);
    max=m;
    min=m;
    ave=m;
    t=m;
    for(i=1;i<n;i++)
    {
        scanf("%d",&m);
        if(m>max)
        {
            max=m;
        }
        if(m<min)
        {
            min=m;
        }
        t+=m;ave=t/n;
    }printf("%d %d %d",max,min,ave);
    return 0;
}
