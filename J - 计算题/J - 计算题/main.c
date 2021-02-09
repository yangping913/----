#include<stdio.h>
#include<math.h>
int sum(int m,int n)
{
    if(n==1)
        return m;
    else if(m==1)
        return n;
    else
        return sum(m-1,n)+sum(m,n-1);
}

int main()

{
    int m,n,x,i;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d%d",&m,&n);
        printf("%d\n",sum(m,n));
    }

    return 0;
}
