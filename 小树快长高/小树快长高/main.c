#include<stdio.h>
int main()
{
    int n,m,k,t=1;
    scanf("%d %d %d",&n,&m,&k);
    while(m-n>k*t)
    {
        t++;
    }
    printf("%d",t);
    return 0;
}
