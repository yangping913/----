#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d\n",&N);
    
    for(i=1;i<=N;i++)
    {
        j=N*i;
        printf("%d*%d=%d\n",N,i,j);
    }return 0;
}
