#include<stdio.h>
int main()
{
    int N,i,sum=0;
    scanf("%d",&N);
    for(i=1;;i++)
    {
        sum+=i*i;
        if(N<sum)
        {
            break;
        }
    }printf("%d",i-1);
}
