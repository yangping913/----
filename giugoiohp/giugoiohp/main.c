#include<stdio.h>
int main()
{
    int n,L,R,sum=0,a[n],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }scanf("%d %d",&L,&R);
    for(i=L;i<=R;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}

