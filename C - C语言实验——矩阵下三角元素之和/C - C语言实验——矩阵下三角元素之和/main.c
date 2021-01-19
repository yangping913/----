#include<stdio.h>
int main()
{int a[10][10],i,j,n,s=0;
scanf("%d",&n);
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
{
 scanf("%d",&a[i][j]);
 if(j<=i)s+=a[i][j];
}
printf("%d",s);
    return 0;
}
