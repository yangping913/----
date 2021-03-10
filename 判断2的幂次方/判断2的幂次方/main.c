#include<stdio.h>
int f(int n)
{
    while(n>0&&n%2==0)
    {
        n/=2;
    }
    return n==1;
}
int main()
{
    int n,t;
    while(~scanf("%d",&n))
    {
        t=f(n);
        if(t==1)
            printf("true\n");
        else
            printf("false\n");
    }
}
