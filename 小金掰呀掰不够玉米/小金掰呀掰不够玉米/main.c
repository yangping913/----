#include<stdio.h>
int main()
{
    int n,m,sum1,sum2,i,j,sum;
    while(~scanf("%d %d",&n,&m))
    {
        sum1=0;sum2=0;
        for(i=1;i<=n;i++)
        {
            sum1+=i;
        }
        for(j=1;j<=m;j++)
        {
            sum2+=j;
        }sum=sum1-sum2;
        printf("%d\n",sum);
    }
}
