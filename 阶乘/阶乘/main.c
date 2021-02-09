#include<stdio.h>
int main()
{
    int n,i,j=1,sum=0;
    scanf("%d",&n);
    if(1<n&&n<=10)
    {
        for(i=1;i<=n;i++)
        {
            j*=i;
            sum+=j;
        }printf("%d\n",sum);
    }else printf("error\n");
}
