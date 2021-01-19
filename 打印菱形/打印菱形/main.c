#include <stdio.h>
int main()
{
    int i,n,j,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(m=1;m<=2*i-1;m++)
            printf("*");
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(m=1;m<=2*i-1;m++)
            printf("*");
        printf("\n");
    }
    return 0;
}
