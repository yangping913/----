#include<stdio.h>
int main()
{
    int n,L,R,sum=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }scanf("%d %d",&L,&R);
    for(i=L-1;i<=R-1;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}
