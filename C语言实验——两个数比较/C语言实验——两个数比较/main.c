#include<stdio.h>
int main()
{
    int a,b,N,i,max;
    scanf("%d\n",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d %d\n",&a,&b);
        max=a;
        if(a<b)
        {max=b;}
        printf("%d\n",max);
    }return 0;
}
