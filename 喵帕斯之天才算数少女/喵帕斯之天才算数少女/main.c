#include<stdio.h>
int f(int m,int n)
{
    if(m==0)
        return n+1;
    else if(m>0&&n==0)
        return f(m-1,1);
    else
        return f(m-1,f(m,n-1));
}
int main()
{
    int n,m;
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&m,&n);
        printf("%d\n",f(m,n));
    }
}
