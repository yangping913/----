#include<stdio.h>
int main()
{
    int n,i,a[100],b[100],m,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(j=0;j<n;j++)
    {
        b[j]=a[i-m+j];
    }
    for(j=m;j<i;j++)
    {
        b[j]=a[j-m];
    }
    for(j=0;j<i;j++)
    {
        printf("%d ",b[j]);
    }
}
