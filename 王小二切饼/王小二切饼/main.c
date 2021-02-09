#include<stdio.h>
int main()
{
    int i,n,b[101];
    b[0]=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        b[i]=b[i-1]+i;
        
    }
    printf("%d\n",b[n]);
    
}
