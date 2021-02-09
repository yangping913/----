#include<stdio.h>
int f(int a,int b)
{
    int y;
    if(a==0)
        return b+1;
    else
        y=f(a-1,b)*2;return y;
}
int main()
{
    int t,i,n,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&m,&n);
        printf("%d\n",f(m,n));
    }
    return 0;
}
