#include<stdio.h>
int main()
{
    int T,N,m,y;
    scanf("%d",&T);
    while(T>0)
    {
        T--;
        scanf("%d",&N);
        y=1000000%N;
        if(y==0)
        {m=1000000/N;
            printf("%d\n",m);}
        else if(y!=0)
            printf("No\n");
    }
    return 0;
}
