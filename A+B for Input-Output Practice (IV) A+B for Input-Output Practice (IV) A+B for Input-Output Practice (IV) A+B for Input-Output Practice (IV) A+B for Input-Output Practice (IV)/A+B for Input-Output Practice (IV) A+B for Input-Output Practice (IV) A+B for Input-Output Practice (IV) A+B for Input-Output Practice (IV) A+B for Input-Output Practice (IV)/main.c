#include<stdio.h>
int main()
{
    int a,i,sum,b;
    sum=0;
    while(~scanf("%d",&a))
    {
        if(a==0)
        {
            break;
        }
        for(i=1;i<=a;i++)
        {
            scanf("%d",&b);
            sum+=b;
            
        }printf("%d\n",sum);
        sum=0;
    }
}
