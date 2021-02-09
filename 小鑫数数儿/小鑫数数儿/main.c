#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    long long x=n;
    int i=0;
    while(x>0)
    {
        x/=10;
        i++;
    }
    int a[i],j;
    for(j=0;j<i;j++)
    {
        a[j]=n%10;
        n/=10;
    }
    for(j=i-1;j>=0;j--)
    {
        if(j!=i-1)
            printf(" ");
        printf("%d",a[j]);
    }
    return 0;
}
