#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
    {
        return 1;
    }else return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=3;i<n;i++)
    {
        if(prime(i)==1&&i%2==1&&prime(n-i)==1&&(n-i)%2==1)
        {
            printf("%d=%d+%d\n",n,i,n-i);
            break;
        }
    }
}


