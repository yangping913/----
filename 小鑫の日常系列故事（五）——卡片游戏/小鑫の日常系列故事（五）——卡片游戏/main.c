#include<stdio.h>
int main()
{
    int n,t,sum1=0,sum2=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&t);
        if(i%2!=0)
        {
            sum1+=t;
        }if(i%2==0)
        {
            sum2+=t;
        }
    }if(sum1>sum2)
    {
        printf("Greater than");
    }else if(sum1<sum2)
    {
        printf("Less than");
    }else {printf("Equal");}
}
