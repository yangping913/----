#include<stdio.h>
int main()
{
    int i,n,sum,t=0,m;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        for(i=0;;i++)
        {
            if(m==1)
                break;
            if(m%3!=0)
                {
                    i=-1;
                    break;
                }
            if(m%6==0)
                m=m/6;
            else if(m%6!=0&&m%3==0)
                m*=2;
        }
        t=i;
        printf("%d\n",t);
    }
}
