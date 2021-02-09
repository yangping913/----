#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int C(int n,int m)
{
    int a;
    if(m==0) a=1;
    else
    {
        if(n==1) a=1;
        else
        {
            if(m==n) a=1;
            else a=C(n-1,m-1)+C(n-1,m);
        }
    }
    return a;
}
int main()
{
    int n,m,i,N,b;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d%d",&n,&m);
        b=C(n,m);
        printf("%d\n",b);
    }
    return 0;
}
