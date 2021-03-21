#include<stdio.h>
#include<string.h>
int main()
{
  int i,j,n,m,k,t,a[101];
  scanf("%d",&n);
  memset(a,0,sizeof(a));
  for(i=0;i<n;i++)
     {
         scanf("%d",&m);
         if(m>=100)
            a[100]++;
         else
        a[m]++;
     }
     for(i=0;i<101;i++)
        if(a[i]!=0)
            printf("%d %d\n",i,a[i]);
}
