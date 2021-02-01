#include<stdio.h>
int F(int n,int m)
{
    if(n == 1 || m == 1)
        return 1;
        
    return F(n-1,m)+F(n,m-1);
}
int main()
{
    int m,n,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&n,&m);
        printf("%d\n",F(n,m));
    }
    return 0;
}
