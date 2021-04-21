#include<stdio.h>
int main()
{
    int a[4],i,sum=0,x=1;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++)
    {
        
        sum+=a[i]*x;
        x*=10;
    }
    printf("%d\n",sum);
}
