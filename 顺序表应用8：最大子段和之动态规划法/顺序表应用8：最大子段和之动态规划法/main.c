#include<stdio.h>

int a[100000];

int main()
{
    int i,n;
    int max=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(sum>max)
            max=sum;
        else if(sum<0)
            sum=0;
    }
    printf("%d\n",max);
    return 0;
